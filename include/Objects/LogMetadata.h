#pragma once

#include <Arduino.h>

#include "Clock.h"
#include "Objects/LogEntry.h"

#define FILE_READ "r"
#define FILE_WRITE "w"
#define FILE_APPEND "a"

class LogMetadata {
   private:
    struct LogHeader {
        char name[32];
        size_t entry_count;
        unsigned long start_time;
        unsigned long finish_time;
        ValueType_t type;

        LogHeader() : entry_count{0}, start_time{0}, finish_time{0}, type{VT_INT} {};
        void reset() {
            entry_count = 0;
            start_time = 0;
            finish_time = 0;
        }
    };

    LogHeader _header;

   public:
    LogMetadata(const String& name) {
        memset(&_header.name[0], 0, sizeof(name[0]) * 32);
        strcpy(_header.name, name.c_str());
        restore();
    };

    void reset() {
        _header.reset();
    }

    const String getName() {
        return _header.name;
    }

    const String getDataFile() const {
        return "/log_" + String(_header.name) + ".txt";
    }

    const String getMetaFile() const {
        return "/log_" + String(_header.name) + ".dat";
    }

    ValueType_t getValueType() const {
        return _header.type;
    }

    void add(const LogEntry& logEntry) {
        unsigned long entry_time = logEntry.getTime();
        if (!_header.start_time) {
            _header.start_time = entry_time;
        }
        _header.finish_time = entry_time;
        _header.entry_count++;
    }

    void restore() {
        if (LittleFS.exists(getMetaFile().c_str())) {
            auto file = LittleFS.open(getMetaFile().c_str(), FILE_READ);
            file.read((uint8_t*)&_header, sizeof(_header));
            file.close();
        }
    }

    void store() {
        auto file = LittleFS.open(getMetaFile().c_str(), FILE_WRITE);
        if (file) {
            file.write((uint8_t*)&_header, sizeof(_header));
            file.close();
        }
    }

    size_t getCount() const {
        return _header.entry_count;
    }

    size_t getSize() const {
        return (sizeof(Entry)) * _header.entry_count;
    }

    const String getStartDateTimeStr() {
        return now.getDateTimeDotFormated(_header.start_time);
    }

    const String getFinishDateTimeStr() {
        return now.getDateTimeDotFormated(_header.finish_time);
    }
};
