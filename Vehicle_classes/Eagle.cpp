#include "Eagle.h"

	Eagle::Eagle(int dist) {
		name = "Îð¸ë";
		speed = 8;
		reduction_factor = 6;
		distance = dist;
	}

	double Eagle::Time() {
		distance -= (distance * reduction_factor) / 100;
		time = distance / speed;
		return time;
	}