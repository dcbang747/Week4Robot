#include "DriveTrain.h"
#include "OI.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem") {

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	leftpwr = 0;
	rightpwr = 0;

}

double DriveTrain::setleftpwr(double L){
	leftpwr = L ;
	left->Set(leftpwr);
	return leftpwr;
}

double DriveTrain::setleftpwr(double R){
	rightpwr = R;
	right->Set(rightpwr);
	return rightpwr;
}

// implement a tank drive
int main(){
DriveTrain Tankdrive;
OI OI;

Tankdrive.InitDefaultCommand();
for(true;true;true)
{
	OI.LeftJoy;
	OI.RightJoy;
	TankDrive.setleftpwr(LeftJoy);
	TankDrive.setrightpwr(RightJoy);
}
return 0;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
