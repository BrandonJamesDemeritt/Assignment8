#ifndef REFRIGERATORCAR_H
#define REFRIGERATORCAR_H

#include "BoxCar.h"

class RefrigeratorCar : public BoxCar {

public:

	//constructor
	RefrigeratorCar(double, double, double, int);

	//getters
	int getTemp() const;

	//setters
	void setTemp(int);


private:

	//data fields
	int temp;

};
#endif