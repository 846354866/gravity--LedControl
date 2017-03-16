/*!
 * @file LedControl.h
 * @brief DFRobot's LedControl
 * @n Header file for DFRobot's play mode setting
 *
 * @copyright	[DFRobot](http://www.dfrobot.com), 2016
 * @copyright	GNU Lesser General Public License
 *
 * @author [yangyang](971326313@qq.com)
 * @version  V1.0
 * @date  2016-12-07
 */
 
 #include <LedControl.h>
 
 //const char ledon[] = {0x55,0xAA,0x03,0x01,0x02,0x14,0x01,0x1A};
 //const char ledoff[] = {0x55,0xAA,0x03,0x01,0x02,0x14,0x00,0x19};
 
 LedControl::LedControl(SoftwareSinglebus *bus_)
	:bus(bus_)
{
	
}

LedControl::~LedControl()
{
	
}

void LedControl::ledOpen()
{
	writeRegister(0x01);
}
void LedControl::ledClose()
{
	writeRegister(0x00);
}

void LedControl::writeRegister(uint8_t str)
{
  bus->beginTransmission(0x03,WRITE);
  bus->write(0x14);//register address
  bus->write(str);//data
  bus->endTransmission();
}