#ifndef IC_AVR_SERIAL_H
#define IC_AVR_SERIAL_H
#include <Arduino.h>
#if !defined(HardwareSerial_h)
#include <HardwareSerial.h>
#endif
namespace IC
{
    class IC_Serial
    {
	private:
		void(*IC_SerialEvent)(String);
		String MSG = "";
	public:
		IC_Serial(void(*listener)(String));
		void Update();
		void Update(HardwareSerial& Serial_Connection);
	};
}
#endif // IC_AVR_SERIAL_H
