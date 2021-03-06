//I affirm that all code given below was written solely by me, 
//Casey Sweet, and that any help I received adhered to the rules stated for this exam.
#include "stdafx.h"
#include <iostream>
#include "Exam1NS.h"
using namespace Exam1;

int main()
{
	Vehicle * Garage[3]; 

	// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
	// in the Garage array. Remember the classes are defined in the namespace Exam1.


	RaceCar rc("red");
	Sedan sd("blue", 5);
	Pickup pk("black", 5000);

	Garage[0] = &rc;
	Garage[1] = &sd;
	Garage[2] = &pk;

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		std::cout << Garage[i]->Description();
	}
}


