// myBlink.cpp
// Application to blink or control a single USR LED on BeagleBone

#include "derek_LED.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
if (argc != 4){
cout << "Usage: ./myBlink <on|off|blink|status> <LED#> <count>" << endl;
return 1;
   }

string cmd(argv[1]);
int ledNum = atoi(argv[2]);
int count = atoi(argv[3]);

LED led(ledNum);

if (cmd == "on") led.turnOn();
else if (cmd == "off") led.turnOff();
else if (cmd == "blink") led.blink(count);
else if (cmd == "status") led.outputState();
else {
cout << "Invalid command. Use on, off, blink, or status." << endl;
return 2;
   }

return 0;
}
