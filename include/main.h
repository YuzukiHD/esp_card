#ifndef _MAIN_H_
#define _MAIN_H_

#include <Arduino.h>
#include <Chrono.h>
#include <DNSServer.h>
#include <EEPROM.h>
#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>


// Default main strings
#define SUBTITLE "关于我"
#define TITLE "YuzukiTsuru"

// Default GPIO
#define LED 4

// Default SSID name
#define ssid "YuzukiTsuru"

// Functions
String footer();
String index();
String header(String t);
String _404();
void blink();
void blink_fast();

#endif