#include "main.h"

// Init system settings
const byte HTTP_CODE = 200;
const byte DNS_PORT = 53;
IPAddress APIP(172, 0, 0, 1);

DNSServer dnsServer;
ESP8266WebServer webServer(80);

void setup() {
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
    // Serial begin
    Serial.begin(115200);
    delay(10);

    WiFi.mode(WIFI_AP);
    WiFi.softAPConfig(APIP, APIP, IPAddress(255, 255, 255, 0));

    Serial.println("");
    Serial.print("Current SSID: ");
    Serial.print(ssid);
    WiFi.softAP(ssid);

    // Start web server
    dnsServer.start(DNS_PORT, "*", APIP);  // DNS spoofing (Only for HTTP)
    webServer.on("/", []() {
        webServer.send(HTTP_CODE, "text/html", index());
        blink();
    });
    webServer.onNotFound([]() {
        webServer.send(HTTP_CODE, "text/html", index());
    });
    webServer.begin();

    // Enable the built-in LED
    digitalWrite(LED, HIGH);
}

void loop() {
    dnsServer.processNextRequest();
    webServer.handleClient();
    if (WiFi.softAPgetStationNum() != 0) {
        digitalWrite(LED, LOW);
    } else {
        digitalWrite(LED, HIGH);
    }
}