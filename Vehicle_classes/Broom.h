#pragma once
#include "Aerial.h"
#include "Macros.h"

class Broom : public Aerial {
public:
	VEHICLE_API Broom(int dist);

	VEHICLE_API double Time();
};
