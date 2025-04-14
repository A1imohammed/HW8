// myApp.cpp
// Controls all 4 USR LEDs on BeagleBone using LED class
// Usage: ./myApp <command>
// command: on , off , flash and status
// Example: ./myApp flash

#include "derek_LED.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
   if (argc != 2) {
      cout << "Usage is ./myApp <command>" << endl;
      cout << "   command is one of: on, off, flash, or status" << endl;
      cout << "   e.g. ./myApp flash" << endl;
      return 1;
   }

   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };

   for (int i = 0; i <= 3; i++) {
      if (cmd == "on") leds[i].turnOn();
      else if (cmd == "off") leds[i].turnOff();
      else if (cmd == "flash") leds[i].flash("100");  // default changed from 50 to 100
      else if (cmd == "status") leds[i].outputState();
      else {
         cout << "Invalid command!" << endl;
         break;
      }
   }

   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
