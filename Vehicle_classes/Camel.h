#pragma once
#include "Terrestrial.h"
#include "Macros.h"

class Camel : public Terrestrial {
public:
	VEHICLE_API Camel(int dist);
	VEHICLE_API double Time();


};