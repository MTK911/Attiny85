# UAC Bypass

### Description:
UAC Bypass using simple methods available in Windows. There is nothing fancy just good old simple workarounds. It is not required to bypass UAC using these methods because you can simple send ALT+Y in HID attacks and say yes on user behalf but nothing is wrong with having some fun.

**1**. UAC_BYPASS_MSCONFIG.ino:<br>
UAC Bypass using msconfig.  Starts msconfig throw some keys and launch cmd in Admin mode. For the sake of POC it executes regedit and stops. You can add customize is according to your requirements ;)

**2**. UAC_Bypass_TaskMgr.ino:<br>
UAC Bypass using TaskManager.  Starts taskmgr throw some keys and launch cmd in Admin mode. For the sake of POC it executes regedit and stops. You can add customize is according to your requirements ;)

### Tested on:
**OS**: Windows 10,7<br>
**User**: Admin Priviliged<br>
**Hardware**: ATtiny85 (Chinese)

