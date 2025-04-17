/*gpioApp.cpp
*/

#include"derek_LED.h"
#include "analogIn.h"
#include "GPIO.h"
using namespace exploringBB;
using namespace std;
int main(int argc, char* argv[]){
 cout << "Starting the myApp program" << endl;
 LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
 leds[1].turnOn();
 leds[3].turnOn();
Page 21 of 24
 leds[2].flash("50"); 
 AnalogIn AIN(0);
 cout << "Using AIN" << AIN.getNumber() << " to read analog value." <<
 std::endl;
 cout << "ADC value is: " << AIN.readAdcSample() << endl;
 cout << endl;
 GPIO outGPIO(60), inGPIO(46);
 inGPIO.setDirection(INPUT);
 outGPIO.setDirection(OUTPUT);
 int button = inGPIO.getValue();
 if(button==LOW){
 outGPIO.setValue(HIGH);
 cout << "Button is pressed." << endl;
 }
 else{
 cout << "Button is not pressed." << endl;
 }
 cout << "Completed the gpioApp program" << endl
 cout << endl;
 return 0;
}
