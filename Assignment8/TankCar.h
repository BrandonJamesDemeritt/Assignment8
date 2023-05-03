#ifndef TANKCAR_H
#define TANKCAR_H

#include "RailroadCar.h"

class TankCar : public RailroadCar {

public:

	//constructor
	TankCar(double = 0, double = 0);

	//getters
	double getRadius() const;

	//setters
	void setRadius(double);

	//class memeber functions
	double getVolume() const;

private:

	double radius;

};
#endif
