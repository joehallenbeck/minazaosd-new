/*
  FrSky FCS-40A/FCS-150A current sensor class for Teensy 3.x and 328P based boards (e.g. Pro Mini, Nano, Uno)
  (c) Pawelsky 20141120
  Not for commercial use
*/

#ifndef _FRSKY_SPORT_SENSOR_FCS_H_
#define _FRSKY_SPORT_SENSOR_FCS_H_

#include "FrSkySportSensor.h"

#define FCS_DEFAULT_ID ID3
#define FCS_DATA_COUNT 2
#define FCS_CURR_DATA_ID 0x0200
#define FCS_VOLT_DATA_ID 0x0210

class FrSkySportSensorFcs : public FrSkySportSensor
{
  public:
    FrSkySportSensorFcs(SensorId id = FCS_DEFAULT_ID);
    void setData(float current, float voltage);
    virtual void send(FrSkySportSingleWireSerial& serial, uint8_t id);

  private:
    uint32_t current;
    uint32_t voltage;
};

#endif // _FRSKY_SPORT_SENSOR_FCS_H_
