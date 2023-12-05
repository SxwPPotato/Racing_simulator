#pragma once
#include "Aerial.h"
#include "Macros.h"

class Eagle : public Aerial {
public:
	VEHICLE_API Eagle(int dist);

	VEHICLE_API double Time();
};