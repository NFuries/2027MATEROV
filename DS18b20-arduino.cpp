//moshi moshi, this is the code file for the ds18b20 temperature sensor for Arduino IDE
//Wiring setup for Ds18b20 : Gnd, 3.3vVcc, output, 4.7ohm pull up resistor
//Major commands: sensors.requestTemperature();    //sensors.getTempCByIndex(x);
#include <OneWire.h> 
#include <DallasTemperature.h>

//Output wire
#define Output 4

DallaTemperature sensors(&oneWire);

void setup(void)
{
  Serial.begin(9600);
  sensors.begin();
}

void loop()
{
  sensors.requestTemperatures();
  Serial.print("Celcius temperature: ");
  //you may connect more than 1 sensor onto one digital pin.
  Serial.print(sensors.getTempCByIndex(0));
  Serial.print(sensor.getTempFbyIndex(0));
  delay(1000);
}
  
