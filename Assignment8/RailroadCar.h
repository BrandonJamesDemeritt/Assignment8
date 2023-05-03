#ifndef RAILROADCAR_H
#define RAILROADCAR_H

class RailroadCar {

public:

	//Getters
	double getLength() const;
	
	//Setters
	void setLength(double);

	//Class member functions
	virtual double getVolume() const = 0;

private:

	//Data Fields
	double length;

};
#endif