/*
 * Intake.h
 *
 *  Created on: Jan 6, 2018
 *      Author: Admin
 */

#include "CANTalon.h"

#ifndef SRC_MANIPULATOR_H_
#define SRC_MANIPULATOR_H_

class Manipulator
{
public:

	Manipulator();
	~Manipulator();


private:

	CANTalon* leftMotor;
	CANTalon* rightMotor;
};





#endif /* SRC_MANIPULATOR_H_ */
