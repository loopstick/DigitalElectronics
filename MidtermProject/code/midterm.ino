#include "Servo.h"
Servo servo;        //initialize a servo object for the connected servo

int angle = 90;
const int inputPinA = 2;               // choose the input pin (for PIR sensor)
const int inputPinB = 3;
int valA = 0;                    // variable for reading the pin status
int valB = 0;
const int ledA = 9;
const int ledB = 10;
const int touchPin = 5;
const int buzzer = 7;
int touchState = 0;

void setup() {
  pinMode(inputPinA, INPUT);     // declare sensor as input
  pinMode(inputPinB, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(touchPin, INPUT);
  pinMode(buzzer, OUTPUT);
  servo.attach(12);      // attach the signal pin of servo to pin9 of arduino
  Serial.begin(9600);
}

void loop() {
  valA = digitalRead(inputPinA);  // read input value
  valB = digitalRead(inputPinB);
  if (valA == HIGH) {
    digitalWrite(ledA, HIGH);
    Serial.println("A");
    for (angle; angle > 0; angle -= 10) {
      servo.write(angle);
      delay(50);
    }
  }
  else {
    digitalWrite(ledA, LOW);
  }
  if (valB == HIGH) {
    digitalWrite(ledB, HIGH);
    Serial.println("B");
    for (angle; angle < 180; angle += 5) {
      servo.write(angle);
      delay(50);
    }
  }
  else {
    digitalWrite(ledB, LOW);
  }

  touchState = digitalRead(touchPin);
  if (touchState == HIGH) {
    tone(buzzer, 600, 500);
  }
    

}

