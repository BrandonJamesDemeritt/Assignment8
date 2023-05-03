#include "RefrigeratorCar.h"

//constructor
RefrigeratorCar::RefrigeratorCar(double length, double width, double height, int temp = 0) : BoxCar(length, width, height), temp(temp) {}

//getters
int RefrigeratorCar::getTemp() const { return temp; }

//setters
void RefrigeratorCar::setTemp(int newTemp) { this->temp = newTemp; }