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
#ifndef __LedControl_H_
#define __LedControl_H_

#include <SoftwareSinglebus.h>
#include <Arduino.h>

class LedControl
{
public:
	
	 /*!
	 *  @brief Constructor
     */
	LedControl(SoftwareSinglebus *bus_);
	
	 /*!
     *  @brief Destructor
     */
	~LedControl();
	
	/*!
	 *  @brief On with LED.
	 */
	void ledOpen();
	
	/*!
	 *  @brief Off with LED.
	 */
	void ledClose();
	//void setMySerial(uint8_t RX, uint8_t TX);
	
private:
	void writeRegister(uint8_t str);
	SoftwareSinglebus *bus;///<single bus.
};
#endif