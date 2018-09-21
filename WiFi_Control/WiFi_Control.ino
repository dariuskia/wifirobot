#include <ESP8266WiFi.h>
#include <WiFiServer.h>
#include <WiFiClient.h>
#include <Servo.h>

Servo base;
Servo arm;

WiFiClient client;
WiFiServer server(80);

unsigned char cmd[6];
const int trigPin = 12;
const int echoPin = 0;

long duration;
int distance;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("radius_bot", "Darius123");
  delay(1000);
  server.begin();
  base.attach(5);
  arm.attach(2);
  base.write(0);
  arm.write(179);
}

void loop() {
  client = server.available();
  if(client) {
    Serial.println("Connected");
    while(client.connected()) {
      while(!client.available()) {
        if(!client.connected()) break;
        delay(1);
      }
      char a = client.read();
      switch (a) {
        case 'F':
          forward();
          break;
        case 'B':
          reverse();
          break;
        case 'L':
          left();
          break;
        case 'R':
          right();
          break;
        case 'S':
          halt();
          break;
      }
    }
  }
  
  /*
  int distance = ultrasound();
  if (distance < 1200) {
    Serial.println(distance);
  }
  delay(50);
  */
}
