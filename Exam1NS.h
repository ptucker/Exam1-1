//I affirm that all code given below was written solely by me, 
//Casey Sweet, and that any help I received adhered to the rules stated for this exam.
#ifndef EXAM1NS_H_
#define EXAM1NS_H_
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

//PT -- two minor compiler errors, but once fixed, it worked fine.
// 92/100

namespace Exam1{

	/// Wheel class is first so that all later Wheel objects can be identified.
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }
	};
// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	
	//PT -- it's much better to separate these different classes into their own files. If another develpoer
	//      wants to use your code, they can take only the files they need, rather than all of the vehicles.
	//  -3
	class Vehicle
	{
	protected:
		std::string _color;
		int _topspeed;
		//PT -- wheels shouldn't have (). It's a variable, not a function.
		// -5
		std::vector<Wheel> wheels();

	public:
		//default constructor so other classes can function.
		Vehicle()
		{
			_color = "";
			_topspeed = 0;
		}
		Vehicle(std::string color) {
			// Complete the implementation
			_color = color;
			_topspeed = 0;
		}
		virtual std::string Description() = 0;
		//PT -- extra }
		// -3
		};

	};

	class RaceCar : public Vehicle
	{
		//Top speed: 250mph
		//Wheel radius: 305mm
	public:
		RaceCar(std::string color) {
			_color = color;
			_topspeed = 250;
			//declare wheel object, then add to the wheels vector
			Wheel Rc(305);
			wheels.push_back(Rc);

		}

		std::string Description()
		{
			std::cout << "I am a " << _color << " racecar and I can go " << _topspeed << " mph." << std::endl;
			return "";
		}
	};

	class Sedan : public Vehicle {
		//Top speed: 95mph
		//Wheel radius: 381mm
	private:
		int number_of_seats;
	public:
		Sedan(std::string color, int seats)
		{
			_color = color;
			number_of_seats = seats;
			_topspeed = 95;
			Wheel Sd(381);
			wheels.push_back(Sd);
		}
		std::string Description()
		{
			std::cout << "I am a " << _color << " sedan, I can go " << _topspeed << " mph, and I have " << number_of_seats << " seats."
				<< std::endl;
			return "";
		}
	};
	class Pickup : public Vehicle {
				//Top speed: 85mph
				//Wheel radius: 432mm
			private:
				int hauling_capacity;
			public:
				Pickup(std::string color, int capacity)
				{
					_color = color;
					hauling_capacity = capacity;
					_topspeed = 85;
					Wheel Pk(432);
					wheels.push_back(Pk);
				}

				std::string Description()
				{
					std::cout << "I am a " << _color << " pickup, I can go " << _topspeed << " mph, and I have a hauling capacity of " << hauling_capacity
						<< " pounds." << std::endl;
					return "";
				}
	};
}
#endif
