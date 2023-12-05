#pragma once
#include "Terrestrial.h"
#include "Macros.h"

class All_terrain_boots :public Terrestrial {
public:
	VEHICLE_API All_terrain_boots(int dist);

	VEHICLE_API double Time();


};