// #include <Arduino.h>

// #include <OneWire.h>
// #include <DallasTemperature.h>

// #define ONE_WIRE_BUS D6

// OneWire oneWire(ONE_WIRE_BUS);
// DallasTemperature sensor(&oneWire);


// void setup(void)
// {
//   Serial.begin(115200);
//   Serial.println(__FILE__);

//   sensor.begin();
// }


// void loop(void)
// {
//   sensor.requestTemperatures();
//   Serial.println(sensor.getTempCByIndex(0));
//   delay(500);
// }