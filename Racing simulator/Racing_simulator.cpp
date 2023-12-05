#include <iostream>
#include <string>
#include <Windows.h>
#include <iterator>
#include "Vehicle.h"
#include "Aerial.h"
#include "Terrestrial.h"
#include "All_terrain_boots.h"
#include "Broom.h"
#include "Camel.h"
#include "Carpet_plane.h"
#include "Centaur.h"
#include "Eagle.h"
#include "Speedycamel.h"



#include <stdlib.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int distance;
	int vehicle = 0 ;
	int type_of_race ;
	int exit = 0;
	int counter = 0;
	int start_game = 0;
	
	std::string race[3] = { "Гонка для наземного транспорта","Гонка для воздушного транспорта" , "Гонка для наземного и воздушного транспорта" };
	std::string type_vehicle[8] = { "1. Ботинки-вездеходы" , "2. Метла" , "3. Верблюд" , "4. Кентавр" , "5. Орёл"  , "6. Верблюд-быстроход" , "7. Ковёр-самолёт" , "0. Закончить регистрацию" };

	std::cout << "Добро пожаловать в гоночный симулятор!" << "\n";
	while (exit != 2) {


		std::string* named = new std::string[7](); //масив для имен
		Vehicle* mass_vehicle = new Vehicle[7](); // масив для классов
		double* Time = new double[7]();

		std::cout << "1. " << race[0] << "\n" << "2. " << race[1] << "\n" << "3. " << race[2] << "\n" << "Выберите тип гонки: ";
		std::cin >> type_of_race;
		while (type_of_race < 1 || type_of_race > 3) {
		std::cout << "\n" << "ТАКОГО ТИПА ГОНКИ НЕ СУЩЕСТВУЕТ!" << "\n";
		std::cout << "\n" << "Добро пожаловать в гоночный симулятор!" << "\n" << "1. " << race[0] << "\n" << "2. " << race[1] << "\n" << "3. " << race[2] << "\n" << "Выберите тип гонки: ";
		std::cin >> type_of_race;
	}

		system("cls");

		std::cout << "\n" << "Введите дистанцию (должна быть положительна):  ";
		std::cin >> distance;
		while (distance <= 0) {
			if (distance == 0) {
				std::cout << "Ошибка!Дистанция равна нулю" << "\n";
				std::cout << "Введите дистанцию (должна быть положительна):  ";
				std::cin >> distance;
			}
			else {
				std::cout << "Ошибка!Дистанция должна быть положительна" << "\n";
				std::cout << "Введите дистанцию (должна быть положительна):  ";
				std::cin >> distance;
			}
		}
	
		system("cls");
	
		do {
			

			do {
				if (vehicle == 0 && counter < 2)std::cout << "\n" << "!!!ДОЛЖНО БЫТЬ ЗАРЕГИСТРИРОВАНО ХОТЯ БЫ 2 ТРАНСПОРТНЫХ СРЕДСТВА!!!" << "\n";

				if (type_of_race == 1) {



					if (counter > 0) {
						std::cout << "\n" << "Зарегистрированые транспортные средства: ";


						mass_vehicle[0].named();
						std::cout << " ";
						mass_vehicle[1].named();
						std::cout << " ";
						mass_vehicle[2].named();
						std::cout << " ";
						mass_vehicle[3].named();
					}


					std::cout << "\n" << race[0] << ". Расстояние : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "Выберите транспорт или 0 для окончания процесса регистрации : " << "\n";

					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {All_terrain_boots boots(distance); if (named[0] == "Ботинки-вездеходы") {
						std::cout << "\n" << "БОТИНКИ-ВЕЗДЕХОДЫ УЖЕ ЗАРЕГИСТРИРОВАНЫ" << "\n"; break;
					}
						  else { mass_vehicle[counter] = boots; named[0] = "Ботинки-вездеходы"; Time[counter] = boots.Time(); counter++; break; }; }
					case 2: {std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					case 3: {Camel camel(distance); if (named[1] == "Верблюд") {
						std::cout << "\n" << "ВЕРБЛЮД УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = camel ; named[1] = "Верблюд"; Time[counter] = camel.Time(); counter++; break; }; }
					case 4: {Centaur centaur(distance); if (named[2] == "Кентавр") {
						std::cout << "\n" << "КЕНТАВР УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = centaur; named[2] = "Кентавр"; Time[counter] = centaur.Time(); counter++; break; }; }
					case 5: {std::cout << "\n" << "Такой вид транспорта нельзя зарегистрировать" << "\n"; break; }
					case 6: {Speedycamel spcamel(distance); if (named[3] == "Верблюд-скороход") {
						std::cout << "\n" << "ВЕРБЛЮД-СКОРОХОД УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = spcamel; named[3] = "Верблюд-скороход"; Time[counter] = spcamel.Time(); counter++; break; }; }
					case 7: { std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					default: std::cout << "\n" << "ТАКОГО ТС НЕТ В НАЛИЧИИ" << "\n"; break;

					}
				}

				else if (type_of_race == 2) {

					if (counter > 0) {
						std::cout << "\n" << "Зарегистрированые транспортные средства: ";

						mass_vehicle[0].named();
						std::cout << " ";
						mass_vehicle[1].named();
						std::cout << " ";
						mass_vehicle[2].named();

					}

					std::cout << "\n" << race[1] << " Расстояние : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "Выберите транспорт или 0 для окончания процесса регистрации : " << "\n";

					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					case 2: {Broom broom(distance); if (named[0] == "Метла") {
						std::cout << "\n" << "МЕТЛА УЖЕ ЗАРЕГИСТРИРОВАНА" << "\n"; break;
					}
						  else { mass_vehicle[counter] = broom; named[0] = "Метла"; Time[counter] = broom.Time(); counter++; break; }; }
					case 3: {std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					case 4: {std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					case 5: {Eagle eagle(distance); if (named[1] == "Орёл") {
						std::cout << "\n" << "ОРЁЛ УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = eagle; named[1] = "Орёл"; Time[counter] = eagle.Time(); counter++; break; }; }
					case 6: {std::cout << "\n" << "!!!ТАКОЙ ВИД ТРАНСПОРТА НЕЛЬЗЯ ЗАРЕГИСТРИРОВАТЬ!!!" << "\n"; break; }
					case 7: { Carpet_plane carpet(distance); if (named[2] == "Ковёр-самолёт") {
						std::cout << "\n" << "КОВЁР-САМОЛЁТ УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = carpet; named[2] = "Ковёр-самолёт"; Time[counter] = carpet.Time(); counter++; break; }; }
					default: std::cout << "\n" << "ТАКОГО ТС НЕТ В НАЛИЧИИ" << "\n"; break;

					}
				}
				else if (type_of_race == 3) {


					if (counter > 0) {
						std::cout << "\n" << "Зарегистрированые транспортные средства: ";

						mass_vehicle[0].named();
						std::cout << " ";
						mass_vehicle[1].named();
						std::cout << " ";
						mass_vehicle[2].named();
						std::cout << " ";
						mass_vehicle[3].named();
						std::cout << " ";
						mass_vehicle[4].named();
						std::cout << " ";
						mass_vehicle[5].named();
						std::cout << " ";
						mass_vehicle[6].named();

					}


					std::cout << "\n" << race[0] << " Расстояние : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "Выберите транспорт или 0 для окончания процесса регистрации : " << "\n";
					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {All_terrain_boots boots(distance); if (named[0] == "Ботинки-вездеходы") {
						std::cout << "\n" << "БОТИНКИ-ВЕЗДЕХОДЫ УЖЕ ЗАРЕГИСТРИРОВАНЫ" << "\n"; break;
					}
						  else { mass_vehicle[counter] = boots; named[0] = "Ботинки-вездеходы"; Time[counter] = boots.Time(); counter++; break; }; }
					case 2: {Broom broom(distance); if (named[1] == "Метла") {
						std::cout << "\n" << "МЕТЛА УЖЕ ЗАРЕГИСТРИРОВАНА" << "\n"; break;
					}
						  else { mass_vehicle[counter] = broom; named[1] = "Метла"; Time[counter] = broom.Time(); counter++; break; }; }
					case 3: {Camel camel(distance); if (named[2] == "Верблюд") {
						std::cout << "\n" << "ВЕРБЛЮД УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = camel; named[2] = "Верблюд"; Time[counter] = camel.Time(); counter++; break; }; }
					case 4: {Centaur centaur(distance); if (named[3] == "Кентавр") {
						std::cout << "\n" << "КЕНТАВР УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = centaur; named[3] = "Кентавр"; Time[counter] = centaur.Time(); counter++; break; }; }
					case 5: {Eagle eagle(distance); if (named[4] == "Орёл") {
						std::cout << "\n" << "ОРЁЛ УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = eagle; named[4] = "Орёл"; Time[counter] = eagle.Time(); counter++; break; }; }
					case 6: {Speedycamel spcamel(distance); if (named[5] == "Верблюд-скороход") {
						std::cout << "\n" << "ВЕРБЛЮД-СКОРОХОД УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = spcamel; named[5] = "Верблюд-скороход"; Time[counter] = spcamel.Time();  counter++; break; }; }
					case 7: { Carpet_plane carpet(distance); if (named[6] == "Ковёр-самолёт") {
						std::cout << "\n" << "КОВЁР-САМОЛЁТ УЖЕ ЗАРЕГИСТРИРОВАН" << "\n"; break;
					}
						  else { mass_vehicle[counter] = carpet; named[6] = "Ковёр-самолёт"; Time[counter] = carpet.Time(); counter++; break; }; }
					default: std::cout << "\n" << "ТАКОГО ТС НЕТ В НАЛИЧИИ" << "\n"; break;

					}
				}
				

			} while (vehicle != 0 || counter < 2);

			system("cls");

			if (vehicle == 0 && counter >= 2) {
				std::cout << "\n" << "1.Зарегистрировать транспорт" << "\n";
				std::cout  << "2.Начать гонку" << "\n";
				std::cin >> start_game;
			}
			system("cls");
		}while (start_game != 2);

		
		std::cout << "\n" << "Результаты гонки: " << "\n";

		// Сортировка
		for (int j = 0; j < counter; j++) {
			for (int i = 0; i < counter - 1; i++) {
				if (Time[i] > Time[i + 1]) {
					double temp = Time[i];
					Time[i] = Time[i + 1];
					Time[i + 1] = temp;
					Vehicle name_temp = mass_vehicle[i];
					mass_vehicle[i] = mass_vehicle[i + 1];
					mass_vehicle[i + 1] = name_temp;
				}


			}


		}

		for (int i = 0; i < counter ; i++) {
			std::cout << "\n";
			mass_vehicle[i].named();
			std::cout << "  " << Time[i];
			std::cout << "\n";
		}



		std::cout << "\n" << "1.Провести ещё одну гонку" << "\n" << "2. Выйти" << "\n";
		std::cin >> exit;
		std::cout << "\n";
		delete[] named;
		delete[] mass_vehicle;
		delete[] Time;
		counter = 0;
	};

	std::cout << "\n";

	return 0;
}