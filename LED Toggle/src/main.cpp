#include <Arduino.h>

//Define LED connected to PIN 
#define LED1 2
#define LED2 3 

bool state = 0;  //Led state

void setup() {
  //Set the pins connected to LED as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  //Toggle led
  digitalWrite(LED1, state);
  digitalWrite(LED2, !state);
  state = !state; //Invert the LED state
  delay(1000); //Wait 1 sec to toggle
}
