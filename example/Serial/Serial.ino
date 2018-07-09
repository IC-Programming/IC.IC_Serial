#include <IC.IC_Serial.h>
void OnLine(String line)
{
  Serial.print("OnLine:");
  Serial.println(line);
}
void setup()
{
  Serial.begin(115200);
}
IC::IC_Serial SerialMonitor(OnLine);
void loop()
{
  SerialMonitor.Update(Serial);
}
