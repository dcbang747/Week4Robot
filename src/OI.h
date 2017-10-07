#ifndef OI_H
#define OI_H
#include <joystick.h>
class OI {
public:
	OI();
	joystick* LeftVal;
	joystick* RightVal;
	double LeftJoy;
	double RightJoy;
};

#endif  // OI_H
