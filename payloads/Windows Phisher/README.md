# Windows Phisher


## Windows_Phisher.ino:<br>
Windows credential phisher, Works by running powershell script and pausing for 1 minute before asking for username and password. Popup only
goes away after valid credentials are given if so credentials are sent to webhook.site from where they can be later retrieved from remote 
location. Orignal concept stolen from [Nishang](https://github.com/samratashok/nishang/blob/master/Gather/Invoke-CredentialsPhish.ps1)<br>

## Zeymare_Windows_Phisher.ino:<br>
Windows credential phisher, works same as Windows_Phisher.ino but logs all entered credentials inculding the invalid ones. It stores them in temporary directory on file rake and in the end delete the created file after sending them when correct credentials are entered. 

**Instructions:**<br>
Before using it make sure the WebHook.site hook is set in payload which you will find almost at the end of the script. Also the 
current time is set for 1 minute you can increase the time to your requirement in "start-sleep -s" which you will find at the start of script.<br>

**Tested on:**<br>
**OS**: Windows 10|8|7<br>
**User**: Admin/Normal User<br>
**Hardware**: ATtiny85 (Chinese)

### Requirements:
**Password Grabber**: https://webhook.site/ or any other request reflector of your choice<br>
**Internet Access**

### Screenshot
<kbd>
  <img src="https://i.ibb.co/Hh0jchC/pop.png">
</kbd><kbd>
  <img src="https://i.ibb.co/rGVSVSg/site.png">
</kbd> 
