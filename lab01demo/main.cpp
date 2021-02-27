#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin, int n);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      Led(myLED2, 3);
      Led(myLED, 2);
      
   }
}
void Led(DigitalOut &ledpin, int n)
{
   for (int i = 0; i < 2 * n; i++)
   {                     //blink for 10 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}