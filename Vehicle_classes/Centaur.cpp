#include "Centaur.h"


	Centaur::Centaur(int dist) {
		name = "Кентавр";
		speed = 15;
		driving_time = 8;
		time_of_rest = 2;
		distance = dist;
	}
	double Centaur::Time() {


		double time = distance / speed;
		int num_rest = time / driving_time;

		for (int i = 1; i <= num_rest; i++) {
			time += time_of_rest;
		}
		return time;
	}