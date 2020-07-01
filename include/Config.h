#pragma once

#include "Config/ConfigItem.h"
#include "Config/ClockConfig.h"
#include "Config/GeneralConfig.h"
#include "Config/NetworkConfig.h"
#include "Config/MqttConfig.h"
#include "Config/WebConfig.h"

enum Configs {
    CONFIG_GENERAL,
    CONFIG_CLOCK,
    CONFIG_NETWORK,
    CONFIG_MQTT,
    CONFIG_WEB,
    NUM_CONFIGS
};

class Config {
   public:
    Config();

    void load(const String&);
    const String save(String& str);

    MqttConfig* mqtt();
    ClockConfig* clock();
    NetworkConfig* network();
    GeneralConfig* general();
    WebConfig* web();

   private:
    void setSynced();

   private:
    ConfigItem* _items[NUM_CONFIGS];
    unsigned long _timestamp;
};

extern Config config;
