#include "Broom.h"

	Broom::Broom(int dist) {
		name = "Метла";
		speed = 20;
		reduction_factor = 0;
		distance = dist;
	}


	double Broom::Time() {
		reduction_factor = distance / 1000;
		distance -= (distance * reduction_factor) / 100;
		time = distance / speed;
		return time;
	}

