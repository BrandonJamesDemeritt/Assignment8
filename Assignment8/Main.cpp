#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

#include "RailroadCar.h"
#include "TankCar.h"
#include "BoxCar.h"
#include "RefrigeratorCar.h"

using namespace std;

int main() {

	//needed variables
	string carType;
	double carLength;
	double carWidth;
	double carHeight;
	double carRadius;
	int carTemp;

	//open input file
	ifstream fin("cars.txt");

	//test input file
	if (!fin) {
		cout << "File doesn't exist" << endl;
		system("pause");
		return -1;
	}

	//Create output file
	ofstream fout("volumes.txt");

	//Create pointer for class
	RailroadCar* car = NULL;

	//Read and process cars from input file
	//Get the carType and Length of Car
	while (fin >> carType >> carLength) {

		//Check for carType
		//If Box cartype, reading widght and height, create object, output volume and delete object
		if (carType == "Box") {
			fin >> carWidth >> carHeight;
			car = new BoxCar(carLength, carWidth, carHeight);
			fout << setprecision(2) << fixed << car->getVolume() << endl;
			delete car;
			car = NULL;
		}

		//If Tank type, reading in radius, create object, output volume and delete object
		if (carType == "Tank") {
			fin >> carRadius;
			car = new TankCar(carLength, carRadius);
			fout << setprecision(2) << fixed << car->getVolume() << endl;
			delete car;
			car = NULL;
		}

		//If Regrigerator type, reading in Widght, Height, and Temp.  Create object, output volume, then delete object.
		if (carType == "Refrigerator") {
			fin >> carWidth >> carHeight >> carTemp;
			car = new RefrigeratorCar(carLength, carWidth, carHeight, carTemp);
			fout << setprecision(2) << fixed << car->getVolume() << endl;
			delete car;
			car = NULL;
		}
	}

	//Close files and exit
	fin.close();
	fout.close();
	return 0;
}