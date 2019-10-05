# SAM Dumper

### Description:

#### 1: Sam_Dumper.ino:<br>
A small but useful powershell script which works by dumping all the SAM, System, Security files from windows registry and sending them on 
remote location. <br>

**Instuctions:**<br>
Before using it make sure the WebHook.site hook is set in SAM_Dumper.ino which you will find in the payload. After you will receive the dumps
they will be base64 encoded you can decode them by saving them in file and using following command in powershell which i have used to encode them.<br>

1. Save Base64 encoded dump into file e.g; SAM.base64.
2. Use certutils to decode the file with following command <br>
**"certutil.exe -decode SAM.base64 SAM.plain"**
3. Do the same with reset of the files and use your favourite LM/NTLM password Cracker to get passwords oPhCrack, Hashcat, Cain&Able etc.


**Tested on:**<br>
**OS**: Windows 10|8|7<br>
**User**: Admin<br>
**Hardware**: ATtiny85 (Chinese)
