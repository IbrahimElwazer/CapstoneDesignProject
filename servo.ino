#include <Servo.h>

Servo myservo;           // création de l'objet myservo 

int pin_servo = 9;       // Pin 6 sur lequel est branché le servo sur l'Arduino si vous utilisez un ESP32 remplacez le 6 par 4 et si vous utilisez un ESP8266 remplacez le 6 par 2
int position = 0;       // Position souhaitée
bool test = false;

void setup() {
  myservo.attach(pin_servo);  // attache le servo au pin spécifié sur l'objet myservo
  myservo.write(position);
}

void loop() {
  
  delay (100);
  test = not test;
  if(test) position = 90;
  else position = 0;
  myservo.write(position);
  }
