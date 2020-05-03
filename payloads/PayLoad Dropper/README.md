# Payload Dropper

### Description:
A simple script which downloads file from internet and execute the downloaded file. 

**1.** PayLoad_Dropper.ino:<br>
Starts run window and dump the whole payload string and execute it which downloads and execute the file after placing it on Desktop.

**2.** Remote_PS_Exec.ino:<br>
Execute powershell script placed in a remote location. Following script uses MS16-032 local windows exploit to escalate privileges.

### Tested on:
**OS**: Windows 10 Pro<br>
**User**: Normal/Admin<br>
**Hardware**: ATtiny85 (Chinese)

### Requirements:
**Internet Access**

### Screenshot
<kbd>
<img src="https://miro.medium.com/max/1000/1*7_m4dF9OqBjePqqRyJ1O-g.jpeg">
</kbd>

# Fun Fact:
During creating this i found out that my antivirus was not allowing `powershell -command invoke-item $env:UserProfile\desktop\catz.jpeg`
to execute through RUN. Which i bypassed with `powershell -command i'n'vo'k'e-it'e'm $env:UserProfile\desktop\catz.jpeg` a very common method used by malware.
