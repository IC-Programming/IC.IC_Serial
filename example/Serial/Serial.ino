/*
|| @file Serial.ino
|| @version 1.0
|| @author Imesh Chamara
|| @contact imesh1chamara@gmail.com
||
|| @description
|| | Serial Custom Event Library.Make Serial Communication easily and fast.
|| | IC_Serial Library Must used as event and if it give reading line by line while in its' Update(); function.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU Lesser General Public
|| | License as published by the Free Software Foundation; version
|| | 2.1 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | Lesser General Public License for more details.
|| |
|| | You should have received a copy of the GNU Lesser General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/
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
