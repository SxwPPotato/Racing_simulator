#include "All_terrain_boots.h"

	All_terrain_boots::All_terrain_boots(int dist) {
		name = "Ботинки-вездеходы";
		speed = 6;
		driving_time = 60;
		time_of_rest = 10;
		distance = dist;
	}

	double All_terrain_boots::Time() {


		double time = distance / speed;
		int num_rest = time / driving_time;

		for (int i = 1; i <= num_rest; i++) {
			if (i == 1) { time += time_of_rest; }
			else { time += time_of_rest - 5; }
		}
		return time;
	}
