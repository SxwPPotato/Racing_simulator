#include "Carpet_plane.h"


	Carpet_plane::Carpet_plane(int dist) {
		name = "Ковёр-самолёт";
		speed = 10;
		reduction_factor = 0;
		distance = dist;
	}

	double Carpet_plane::Time() {

		if (distance < 1000) {
			distance -= (distance * reduction_factor) / 100;
			time = distance / speed;
		}
		else if (1000 <= distance < 5000) {
			reduction_factor = 3;
			distance -= (distance * reduction_factor) / 100;
			time = distance / speed;
		}
		else if (5000 <= distance < 10000) {
			reduction_factor = 10;
			distance -= (distance * reduction_factor) / 100;
			time = distance / speed;
		}
		else {
			reduction_factor = 5;
			distance -= (distance * reduction_factor) / 100;
			time = distance / speed;
		}

		return time;
	}

