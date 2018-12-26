#include <Current_Sensor.h>

const int pin = 5;
const float gain = 2.0;
Current_Sensor cs(pin,gain);

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


