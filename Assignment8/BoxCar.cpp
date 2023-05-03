#include "BoxCar.h"

//constructors
BoxCar::BoxCar(double length, double width, double height) : width(width), height(height) {
	setLength(length);
}

//getters
double BoxCar::getHeight() const { return height; }
double BoxCar::getWidth() const { return width;  }

//setters
void BoxCar::setHeight(double newHeight) { this->height = newHeight;  }
void BoxCar::setWidth(double newWidth) { this->width = newWidth; }

//Class memeber functions
/*Get Volume, formula Length* Width* Height
@Return, returns a double of the calculated volume
*/
double BoxCar::getVolume() const {
	return getLength() * height * width;
}