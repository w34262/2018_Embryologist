/*
 * Lift.h
 *
 *  Created on: Jan 6, 2018
 *      Author: Admin
 */

#ifndef SRC_LIFT_H_
#define SRC_LIFT_H_

#include "ctre/Phoenix.h"
#include "WPILib.h"
#include "Macros.h"


class Lift
{
public:
		Lift();
		~Lift();

		void liftRobot(float liftInput);
		void PistonLift(bool pistonButton, bool disengage);
		float getLeftLiftEnc();
		float getRightLiftEnc();
		float getAvgLiftEnc();
		void liftAuto(float speed, float autoLiftInput);
		//void PistonClimb(bool climbButton);
		void CalibrateLift(bool calibrateButton, bool safeCalibrate);
		void resetLiftEncoder();
		bool lowerLimitTester();
		bool upperLimitTester();
		void rungDeploy(bool deployButton);

		void setHeightEnc(float joystick);
		void doLift();
		void fixErrorLeft(float error);
		void fixErrorRight(float error);

		DoubleSolenoid *liftPiston;
		//DoubleSolenoid *rightLiftPiston;

		DoubleSolenoid *rungPiston;

private:
		TalonSRX *frontRightLift;
		TalonSRX *frontLeftLift;
		TalonSRX *backRightLift;
		TalonSRX *backLeftLift;

		DigitalInput *upperLimit;
		DigitalInput *lowerLimit;

		float targetEnc;
		float encErrorRight;
		float encErrorLeft;
		float currentLeftEnc;
		float currentRightEnc;

};


#endif /* SRC_LIFT_H_ */
