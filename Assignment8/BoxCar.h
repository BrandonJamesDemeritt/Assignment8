#ifndef BOXCAR_H
#define BOXCAR_H

#include "RailroadCar.h"

class BoxCar : public RailroadCar {


public:
	//constructor
	BoxCar(double, double, double);

	//Getters
	double getWidth() const;
	double getHeight() const;

	//setters
	void setWidth(double);
	void setHeight(double);

	//class memeber functions
	double getVolume() const;

private:
	//data fields
	double width;
	double height;

};
#endif
