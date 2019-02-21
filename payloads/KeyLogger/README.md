# KeyLogger

### Description:

#### 1: TimeBomb_KeyLogger.ino:<br>
A Keylogger based on powershell. Works by dropping payload in temporary dir and executing it in background. Records keystrokes for set time. 
After time runs out it send the recorded keystrokes to the webhook.site and deletes all the keylogger data from the temporary directory.<br>

**Tested on:**<br>
**OS**: Windows 10|8|7<br>
**User**: Admin/Normal User<br>
**Limitation**: Execution Policy<br>
**Hardware**: ATtiny85 (Chinese)
