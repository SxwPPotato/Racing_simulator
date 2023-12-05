#pragma once
#include "Aerial.h"
#include "Macros.h"

class Carpet_plane : public Aerial {
public:
	VEHICLE_API Carpet_plane(int dist);

	VEHICLE_API double Time();
};