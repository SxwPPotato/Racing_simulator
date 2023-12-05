#pragma once
#include "Terrestrial.h"
#include "Macros.h"

class Speedycamel : public Terrestrial {
public:
	VEHICLE_API Speedycamel(int dist);

	VEHICLE_API double Time();


};