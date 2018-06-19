/*
 * LilyPad cases test
 * 
 */

//LEDs
const int ledOne = A5;
const int ledTwo = 6;
const int ledThree = A7;
const int ledFour = A8;

//Button
const int myButton = A4;

//variables
int i=0;

//Number of LED circuits
const int N=4;

//Total amount of time for 1 cycle...subject to change?
const int delayTime=2000;

void setup() {
  //Outputs
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);     
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);

  //Inputs
  pinMode(myButton, INPUT);
}

void loop() {
  
  //Create cases where button dictates mode selected
}
