# 🦆 Rubber Ducky / Bad USB payloads 🔌

## ⚠️ Disclaimer ⚠️:
### These are for educational purposes only. Do not use them without explicit consent. 

## DigiKeyboard and Arduino IDE

The Digispark is an Attiny85 based microcontroller development board similar to the Arduino line, only cheaper, smaller, and a bit less powerful.
You need to install the Arduino IDE first, then set up the right environment for your ATTiny85 microcontroller. 


> [Arduino IDE](https://www.arduino.cc/en/software)  
> [Additional Boards Manager URL (copy and paste url in the dedicated section)](http://digistump.com/package_digistump_index.json)  
> Board name → Digistump AVR Boards → Digispark (Default 16.5mhz)  
> [DigiKeyboard CheatSheet](https://cdn.hackaday.io/files/10446446921664/DigiKeyboard_6keys.h)

When your script is compiling, don't forget to upload your script before plugging in your device, the terminal will inform you that you have 60 seconds to plug in your microcontroller. My scripts are written for UK keyboards. Adapt to suit your own.

I wrote these scripts for the ATTiny85 development boards, but they can easily be reverse engineered to suit your needs.


## Reverse Shell

The reverse shell grants access to a remote machine and gives full access to it without the host being aware of it. There are two files, one written in the Arduino IDE, the other in the Rubber Ducky language saved to a text file. Downloading it won't do any harm since it's a text file and not Inject.bin file. It was generated using the [Duck ToolKit](https://ducktoolkit.com/payload/windows#), I then translated it to fit my microcontroller's language.

If you want to play around with it, consider using a VM (virtual machine), so that you do no harm to your own machine by executing someone else's script. There are plenty of free ones online. 


Do not use this on anyone without their explicit consent.  
