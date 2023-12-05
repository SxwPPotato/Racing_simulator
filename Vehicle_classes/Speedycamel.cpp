#include "Speedycamel.h"


	Speedycamel::Speedycamel(int dist) {
		name = "Верблюд-быстроход";
		speed = 40;
		driving_time = 10;
		time_of_rest = 5;
		distance = dist;
	}

	double Speedycamel::Time() {


		double time = distance / speed;
		int num_rest = time / driving_time;

		for (int i = 1; i <= num_rest; i++) {
			if (i == 1) { time += time_of_rest; }
			else if (i == 2) { time += time_of_rest + 1.5; }
			else { time += time_of_rest + 3; }
		}
		return time;
	}

