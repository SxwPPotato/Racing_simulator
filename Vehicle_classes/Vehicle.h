#pragma once
#include <string>
#include "Macros.h"

class Vehicle {

protected:
	double distance = 0;
	std::string name;
	double speed = 0;


public:
	VEHICLE_API void named();
};