# Windows Crasher

### Description:

#### 1: ForkBomb.ino:<br>
Creates looping payload in batch file and executes it. Which result in unresponsive Operating System only way to stop it is by restarting. 
It takes about 10-15 Seconds to completly halt the system.<br>

**Tested on:**<br>
**OS**: Windows 7/8/10<br>
**User**: Normal/Admin User<br>
**Hardware**: ATtiny85 (Chinese)

#### 2: BSOD.ino:<br>
Original concept by [DarkN3ss](https://forums.hak5.org/topic/33268-payload-windows-bsod/). BSOD.ino runs PowerShell as admin and kills all process which results in BSOD, so user should have admin level privileges for successful crash otherwise it will just get stuck on enter password page. It takes around 10-15 Seconds for BSOD.

#### 3: UACBypassBSOD.ino:<br>
Runs cmd as admin using UAC bypass kills winint and that results in BSOD.<br>

#### 4: Mayhem.ino:<br>
Mayhem a little powershell script written by people who created [PowerSploit](https://github.com/PowerShellMafia/PowerSploit). Mayhem.ino runs PowerShell as admin by bassing UAC and and using Mayhem technique to set console process level to critical and later killing the process which results in BSOD, so user should have admin level privileges for successful crash otherwise it will just give error message. It takes around 10-15 Seconds for BSOD.
<br>

**Tested on:**<br>
**OS**: Windows 7(VM)/8(VM)/10<br>
**User**: Admin User<br>
**Hardware**: ATtiny85 (Chinese)
