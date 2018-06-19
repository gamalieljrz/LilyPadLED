/*
 * LilyPad LED project
 * test for sequential flashing
 */

const int ledOne = A4; //
const int ledTwo = A3;   //
const int ledThree = A2;
const int ledFour = A7;
const int ledFive = 6;
const int ledSix = A5;


int i = 0;

// Number of LED circuits
const int N = 6;

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

// Main program. Runs over and over again without stopping.
void loop() {
  //set condition for true?

 for(i = 0; i<3; i++){ 
  // Turn LEDs on, sequentially
  digitalWrite(ledSix, HIGH);
  delay(delayTime/N/N);
  digitalWrite(ledFive, HIGH);
  delay(delayTime/N/N);
  digitalWrite(ledFour, HIGH);
  delay(delayTime/N/N);
  digitalWrite(ledThree, HIGH);
  delay(delayTime/N/N);
  digitalWrite(ledTwo, HIGH);
  delay(delayTime/N/N);
  digitalWrite(ledOne, HIGH);


  // Leave lights on for a bit
  delay(delayTime/N/2);

  // Turn LEDs off
  digitalWrite(ledSix, LOW);
  delay(delayTime/N/N);
  digitalWrite(ledFive, LOW);
  delay(delayTime/N/N);
  digitalWrite(ledFour, LOW);
  delay(delayTime/N/N);
  digitalWrite(ledThree, LOW);
  delay(delayTime/N/N);
  digitalWrite(ledTwo, LOW);
  delay(delayTime/N/N);
  digitalWrite(ledOne, LOW);

  // Leave lights off for a bit
  delay(delayTime/N/2);
 }

  //turn them on at the same time?
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledFive, HIGH);
  digitalWrite(ledSix, HIGH);
  
  delay(delayTime/N);

  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledFive, LOW);
  digitalWrite(ledSix, LOW);

  delay(delayTime/N);
}

