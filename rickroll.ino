
#include "DigiKeyboard.h"

void setup() {
// this is generally not necessary but with some older systems it seems to
// prevent missing the first character after a delay:
DigiKeyboard.sendKeyStroke(0);

// Simulate keyboard inputs to open a new tab and go to a URL
DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT); // Press Windows key + r to open run box
DigiKeyboard.delay(1000); // Wait for the search box to open
DigiKeyboard.print("chrome.exe https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley"); // Type the name of the browser you want to use + utl
DigiKeyboard.sendKeyPress(KEY_ENTER); // Press Enter to open the browser
DigiKeyboard.delay(2000); // Wait for the browser to open
}

void loop() {


}

