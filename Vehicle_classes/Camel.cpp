#include "Camel.h"


Camel::Camel(int dist) {
	name = "Верблюд";
	speed = 10;
	driving_time = 30;
	time_of_rest = 5;
	distance = dist;
}


double Camel::Time() {


	double time = distance / speed;
	int num_rest = time / driving_time;

	for (int i = 1; i <= num_rest; i++) {
		if (i == 1) { time += time_of_rest; }
		else { time += time_of_rest + 3; }

	}
	return time;
}