#include "Objects/LoggerTask.h"

#include "Clock.h"
#include "Runtime.h"
#include "PrintMessage.h"
#include "Utils/FileUtils.h"
#include "Utils/TimeUtils.h"

// static const char* MODULE = "LoggerTask";

LoggerTask::LoggerTask(size_t id, const String& name, unsigned long interval, unsigned long period) : _meta{name},
                                                                                                      _id{id},
                                                                                                      _interval{interval},
                                                                                                      _period{period},
                                                                                                      _limit{10},
                                                                                                      _lastUpdated{0},
                                                                                                      _bufferFlushed{millis()},
                                                                                                      _reader{NULL},
                                                                                                      _writer{NULL} {}

LoggerTask::~LoggerTask() {
    if (_writer) delete _writer;
    if (_reader) delete _reader;
}

LogMetadata* LoggerTask::getMetadata() {
    return &_meta;
}

void LoggerTask::clear() {
    removeFile(_meta.getDataFile().c_str());
    removeFile(_meta.getMetaFile().c_str());
    _meta.reset();
}

void LoggerTask::update() {
    if (_reader) {
        if (_reader->isActive()) {
            _reader->loop();
        } else {
            delete _reader;
            _reader = NULL;
        }
        return;
    }

    if (_writer) {
        if (_writer->isActive()) {
            _writer->loop();
        } else {
            delete _writer;
            _writer = NULL;
        }
        return;
    }

    if (!_lastUpdated || (millis_since(_lastUpdated) >= _interval)) {
        String value = runtime.read(_meta.getName());
        if (value.isEmpty()) {
            return;
        }
        if (now.hasSynced()) {
            LogEntry entry = LogEntry(now.getEpoch(), value.toFloat());
            _buffer.push(entry);
        }
        _lastUpdated = millis();
    }

    if (millis_since(_bufferFlushed) > ONE_MINUTE_ms) {
        if (_buffer.size()) {
            _writer = new LogWriter(_meta, _buffer);
            _writer->setActive();
        }
        _bufferFlushed = millis();
    }
}

const String LoggerTask::asCVS() {
    String res;
    res += String(_id, DEC);
    res += ";";
    res += getMetadata()->getName();
    res += ";";
    res += String(getMetadata()->getCount(), DEC);
    res += ";";
    res += prettyBytes(getMetadata()->getSize());
    res += ";";
    res += getMetadata()->getStartDateTimeStr();
    res += ";";
    res += getMetadata()->getFinishDateTimeStr();
    return res;
}

const String LoggerTask::asJson() {
    String res;
    res += "{\"id\":\"";
    res += String(_id, DEC);
    res += "\",";
    res += "\"name\":\"";
    res += getMetadata()->getName();
    res += "\",";
    res += "\"entries\":\"";
    res += String(getMetadata()->getCount(), DEC);
    res += "\",";
    res += "\"size\":\"";
    res += prettyBytes(getMetadata()->getSize());
    res += "\"";
    res += "}";
    return res;
}

void LoggerTask::readEntries(LogEntryHandler h) {
    _reader = new LogReader(&_meta, h);
    _reader->setActive(true);
}

// pm.info("task: " + _name);
// String buf;
// if (readFile(_filename, buf, 5120)) {
//     size_t lines_cnt = itemsCount(buf, "\r\n");
//     if ((lines_cnt > _limit + 1) || !lines_cnt) {
//         removeFile(_filename);
//         lines_cnt = 0;
//     }
//     if (lines_cnt > _limit) {
//         buf = deleteBeforeDelimiter(buf, "\r\n");
//         if (timeNow->hasSynced()) {
//             buf += timeNow->getTimeUnix() + " " + value + "\r\n";
//             writeFile(_filename, buf);
//         }
//     }
// }
// if (timeNow->hasSynced()) {
//     addFile(_filename, timeNow->getTimeUnix() + " " + value);
// }

// String data;
// if (!LittleFS.open(_ma,e, "r") {
//     pm.error("open file");
//     return;
// }
// String buf = "{}";
// String json_array;
// String unix_time;
// String value;
// while (!data.isEmpty()) {
//     String tmp = selectToMarker(data, "\n");
//     data = deleteBeforeDelimiter(data, "\n");
//     unix_time = selectToMarker(tmp, " ");
//     jsonWriteInt(buf, "x", unix_time.toInt());
//     value = deleteBeforeDelimiter(tmp, " ");
//     jsonWriteFloat(buf, "y1", value.toFloat());
//     if (data.length() < 3) {
//         json_array += buf;
//     } else {
//         json_array += buf + ",";
//     }
//     buf = "{}";
// }
// unix_time = "";
// value = "";
// data = "";
// json_array = "{\"status\":[" + json_array + "]}";
// pm.info(json_array);

// MqttClient::publishChart(getTopic().c_str(), json_array);
