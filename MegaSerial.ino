#include <IC.IC_Serial.h>
void OnLine(String line)
{
  Serial.print("OnLine:");
  Serial.println(line);
}
void setup()
{
  Serial.begin(9600);
  Serial1.begin(19200);
  Serial2.begin(115200);
  Serial2.begin(250000);
}
IC::IC_Serial SerialMonitor(OnLine);
void loop()
{
  SerialMonitor.Update(Serial);
  SerialMonitor.Update(Serial1);
  SerialMonitor.Update(Serial2);
  SerialMonitor.Update(Serial3);
}