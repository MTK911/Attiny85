# Google Chrome file grabber

### Description:
Steals specified file from `C:\Users\..\AppData\Local\Google\Chrome\User Data\Default` directory and sends it to a listening webhook.

**1**. chrome_file_stealer.ino:<br>
Firstly it copies the specified file, because payload cannot send the file used by other process. Then it is uploaded via POST request to the listening webhook. After all, freshly created copy is removed and execution is finished.

### Tested on:
**OS**: Windows 10<br>
**User**: Admin Privileged<br>
**Hardware**: ATtiny85