# BackDoor

### Description:

#### 1: Remote_BackDoor.ino:<br>
Creates account with admin privileges with name blanka and passwd Ping@123. Also hides it from login 
screen and turn on remote desktop to be accessible from remote location.<br>

**Tested on:**<br>
**OS**: Windows 10<br>
**User**: Admin User<br>
**Hardware**: ATtiny85 (Chinese)

#### 2: GoodOl' BackDoor.ino:<br>
Based on old sticky key backdoor trick by adding a registry key instead of replacing the file in system32 directory. After successful run press shift 5 times on login screen and command prompt will popup with admin privileges.<br>

To remove the backdoor run the following command in command prompt with admin privileges and backdoor will be removed.

***REG DELETE "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\sethc.exe***

**Tested on:**<br>
**OS**: Windows 10/7<br>
**User**: Admin User<br>
**Hardware**: ATtiny85 (Chinese)

