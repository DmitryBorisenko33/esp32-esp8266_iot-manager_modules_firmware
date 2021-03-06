#pragma once
#include <Arduino.h>
#include "Global.h"

uint32_t ESP_getChipId();

const String getChipId();

void setLedStatus(LedStatus_t status);

const String getUniqueId(const String& name);

const String printMemoryStatus();

const String getHeapStats();

const String getMacAddress();

void setChipId();
