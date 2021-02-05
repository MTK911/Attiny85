# KeyLogger

### Description:

#### 1: TimeBomb_KeyLogger.ino:<br>
A Keylogger based on powershell. Works by dropping payload in temporary dir and executing it in background. Records keystrokes for set time. 
After time runs out it send the recorded keystrokes to the webhook.site and deletes all the keylogger data from the temporary directory. <br>Please note it is now detectable by most Anti-virus programs. Only way to make it undetectable is to obfuscate the payload.<br>

**Instuctions:**<br>
Before using it make sure the WebHook.site hook is set in keylogger payload which you will find almost at the end of the script. Also the 
current time is set for 1 minute you can increase the time to your requirmnent in ".AddMinutes(-1)" which you will also find close to webhook location.<br>

**Tested on:**<br>
**OS**: Windows 10|8|7<br>
**User**: Admin/Normal User<br>
**Limitation**: Execution Policy, Anti-Virus :p<br>
**Hardware**: ATtiny85 (Chinese)
