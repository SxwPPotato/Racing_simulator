#pragma once
#include "Terrestrial.h"
#include "Macros.h"

class Centaur : public Terrestrial {
public:
	VEHICLE_API Centaur(int dist);
	VEHICLE_API double Time();
};