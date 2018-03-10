#ifndef SRC_AUTO_H_
#define SRC_AUTO_H_

#include <Macros.h>
#include <Drive.h>
#include <Manipulator.h>
#include <Lift.h>
#include <WPILib.h>
#include <ctre/Phoenix.h>

class Auto
{
public:
	Auto();
	~Auto();

	void preCheck();
	void auto0();
	void auto1();
	void auto2();
	void auto3();
	void auto4();
	void auto5();
	void auto5_5();
	void auto6();
	void nonPreLoad_auto1();
	void nonPreLoad_auto2();
	void nonPreLoad_auto3();

	void turnRobot(float speed, float time);
	void liftTime(float speed, float time);
	void displayData();
	int dataVal();
	DigitalInput* selector;

	//parameters
	void driveStraight(float speed, int enc);
	void setMotors(float speedL, float speedR, float time);

	int autoSelector();
	bool doAuto;

private:
	std::string gameData;

	Drive* drive;
	Manipulator* manip;
	Lift* lift;

	int dataTest;
	int counter;
};




#endif /* SRC_AUTO_H_ */
