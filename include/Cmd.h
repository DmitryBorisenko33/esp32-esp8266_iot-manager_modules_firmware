#pragma once

void cmd_pinSet();
void cmd_pinChange();
void cmd_pwm();
void cmd_switch();
void cmd_pwmSet();
void cmd_stepper();
void cmd_stepperSet();
void cmd_servo();
void cmd_servoSet();
void cmd_serialBegin();
void cmd_serialWrite();

void cmd_text();
void cmd_textSet();
void cmd_mqtt();
void cmd_http();

void cmd_button();
void cmd_buttonSet();
void cmd_buttonChange();
void cmd_switch();

void cmd_inputDigit();
void cmd_digitSet();
void cmd_timeSet();
void cmd_inputTime();

void cmd_firmwareUpdate();
void cmd_firmwareVersion();

void cmd_analog();
void cmd_dallas();

void cmd_levelPr();
void cmd_ultrasonicCm();

void cmd_bmp280P();
void cmd_bmp280T();

void cmd_bme280T();
void cmd_bme280P();
void cmd_bme280H();
void cmd_bme280A();

void cmd_dhtT();
void cmd_dhtH();
void cmd_dhtP();
void cmd_dhtComfort();
void cmd_dhtDewpoint();
void cmd_dhtPerception();

void cmd_getData();