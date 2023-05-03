#include "TankCar.h"
#include <math.h>

//constructor
TankCar::TankCar(double length, double radius) : radius(radius)  {
	setLength(length);
}

//getters
double TankCar::getRadius() const { return radius; }

//setters
void TankCar::setRadius(double newRadius) { this->radius = newRadius; }

//class memeber functions

//Volume, formula is pi * r^2 * h
/*@Return, returns a double of the calculated volume of tank car
*/
double TankCar::getVolume() const {
	return (atan(1) * 4) * (radius * radius) * getLength();
}