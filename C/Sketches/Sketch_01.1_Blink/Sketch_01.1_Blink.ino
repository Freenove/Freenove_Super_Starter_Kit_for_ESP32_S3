/**********************************************************************
* Filename    : Blink
* Description : Make the LED marked with "IO2" led blink.
* Auther      : www.freenove.com
* Modification: 2022/12/06
**********************************************************************/
#define LED_BUILTIN  2

// the setup function runs once when you press reset button or power up the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output pin.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
