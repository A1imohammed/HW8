// Header file for LED class to control USR LEDs on BeagleBone

#ifndef DEREK_LED_H
#define DEREK_LED_H

#include <string>
using std::string;

class LED {
   private:
      string path;
      int number;
      virtual void writeLED(string filename, string value);
      virtual void removeTrigger();
   public:
      LED(int number);
      virtual void turnOn();
      virtual void turnOff();
      virtual void flash(string delayms = "50");
      virtual void outputState();
      virtual ~LED();
};

#endif
