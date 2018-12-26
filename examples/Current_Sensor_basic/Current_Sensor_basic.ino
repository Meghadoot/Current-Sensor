#include <Current_Sensor.h>

const int pin = 5;
Current_Sensor cs(pin);

void setup() 
{
 Serial.begin(9600);
}


void loop()
{
float current = cs.calculate_Current();
Serial.print("Measured Current is:");
Serial.print(current);
Serial.println(" Amp");
}


