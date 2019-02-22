# Wi-Fi password stealer

### Description:
As the name suggests it grabs stored wifi passwords on windows and send their plain text to your webhook page which you can see later. There are two different files and both have same functionalty the only difference is how cmd windows is going to be hidden from display.

**1.** Wifikey-Grab.ino:<br>
Starts cmd in a small window in order to grabs less attention

**2.** WifiKey-Grab_Minimize-of-Shame.ino:<br>
Starts cmd in a small window but also hides the cmd by scrolling it down the screen method defined in hak5darren's rubberducky wiki [Payload hide cmd window](https://github.com/hak5darren/USB-Rubber-Ducky/wiki/Payload---hide-cmd-window)

### Tested on:
**OS**: Windows 10 Pro<br>
**User**: Admin Priviliged<br>
**Hardware**: ATtiny85 (Chinese)

### Requirements:
**Password Grabber**: https://webhook.site/ or any other request reflector of your choice<br>
**Internet Access**

### Screenshot
<kbd>
<img src="https://i.ibb.co/fkQv9tN/Untitled.png">
</kbd>
