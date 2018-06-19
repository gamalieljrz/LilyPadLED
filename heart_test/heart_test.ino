/*
 * LilyPad LED project
 * test for sequential flashing
 */

//Pins on LilyPad
const int ledOne = A4;  //pin A4 
const int ledTwo = A3;   
const int ledThree = A2;
const int ledFour = A7;
const int ledFive = 6;
const int ledSix = A5;


int i = 0;  //integer varialble

// Number of LED circuits
const int totalLED = 6;

// Total amount of time for one cycle
const int delayTime = 2000;

// Set things up
void setup() {
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);     
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(ledFive, OUTPUT);
  pinMode(ledSix, OUTPUT);
    
} 

// Main program. Runs over and over again without stopping(or until the battery dies :).
void loop() {
  
 //set condition for true?

 //create a small sequence of light pattern
 //turn on each LED on 1 @ a time then off, 3 times
 //at the end we turn them all on/off...repeat
 for(i = 0; i<3; i++){ 
  // Turn LEDs on, sequentially
  digitalWrite(ledSix, HIGH);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledFive, HIGH);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledFour, HIGH);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledThree, HIGH);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledTwo, HIGH);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledOne, HIGH);


  // Leave lights on for a bit
  delay(delayTime/totalLED/2);

  // Turn LEDs off
  digitalWrite(ledSix, LOW);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledFive, LOW);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledFour, LOW);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledThree, LOW);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledTwo, LOW);
  delay(delayTime/totalLED/totalLED);
  digitalWrite(ledOne, LOW);

  // Leave lights off for a bit
  delay(delayTime/totalLED/2);
 }

  //turn them ON at the same time
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, HIGH);
  digitalWrite(ledSix, HIGH);
  
  delay(delayTime/totalLED);

  //turn OFF at the same time
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);

  delay(delayTime/totalLED);
}

