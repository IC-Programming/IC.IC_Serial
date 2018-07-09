#include "IC.IC_Serial.h"
namespace IC
{
	IC_Serial::IC_Serial(void(*listener)(String))
	{
		IC_SerialEvent = listener;
		MSG = "";
	}
	void IC_Serial::Update()
	{
		while(Serial.available() >= 1)
		{
			int cin = Serial.read();
			if(cin == 10)
			{
				IC_SerialEvent(MSG);
				MSG = "";
			}
			else
			{
				MSG += ((char)cin);
			}
		}
	}
	void IC_Serial::Update(HardwareSerial& Serial_Connection)
	{
		while(Serial_Connection.available() >= 1)
		{
			int cin = Serial_Connection.read();
			if(cin == 10)
			{
				IC_SerialEvent(MSG);
				MSG = "";
			}
			else
			{
				MSG += ((char)cin);
			}
		}
	}
}
