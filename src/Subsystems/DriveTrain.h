#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <Talon.h>
class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon* left;
	Talon* right;
	double leftpwr;
	double rightpwr;
public:
	DriveTrain();
	void InitDefaultCommand();
	double setleftpwr(double);
	double setrightpwr(double);

};

#endif  // DriveTrain_H
