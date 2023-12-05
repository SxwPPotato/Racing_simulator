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
	
	std::string race[3] = { "����� ��� ��������� ����������","����� ��� ���������� ����������" , "����� ��� ��������� � ���������� ����������" };
	std::string type_vehicle[8] = { "1. �������-���������" , "2. �����" , "3. �������" , "4. �������" , "5. ���"  , "6. �������-���������" , "7. ����-������" , "0. ��������� �����������" };

	std::cout << "����� ���������� � �������� ���������!" << "\n";
	while (exit != 2) {


		std::string* named = new std::string[7](); //����� ��� ����
		Vehicle* mass_vehicle = new Vehicle[7](); // ����� ��� �������
		double* Time = new double[7]();

		std::cout << "1. " << race[0] << "\n" << "2. " << race[1] << "\n" << "3. " << race[2] << "\n" << "�������� ��� �����: ";
		std::cin >> type_of_race;
		while (type_of_race < 1 || type_of_race > 3) {
		std::cout << "\n" << "������ ���� ����� �� ����������!" << "\n";
		std::cout << "\n" << "����� ���������� � �������� ���������!" << "\n" << "1. " << race[0] << "\n" << "2. " << race[1] << "\n" << "3. " << race[2] << "\n" << "�������� ��� �����: ";
		std::cin >> type_of_race;
	}

		system("cls");

		std::cout << "\n" << "������� ��������� (������ ���� ������������):  ";
		std::cin >> distance;
		while (distance <= 0) {
			if (distance == 0) {
				std::cout << "������!��������� ����� ����" << "\n";
				std::cout << "������� ��������� (������ ���� ������������):  ";
				std::cin >> distance;
			}
			else {
				std::cout << "������!��������� ������ ���� ������������" << "\n";
				std::cout << "������� ��������� (������ ���� ������������):  ";
				std::cin >> distance;
			}
		}
	
		system("cls");
	
		do {
			

			do {
				if (vehicle == 0 && counter < 2)std::cout << "\n" << "!!!������ ���� ���������������� ���� �� 2 ������������ ��������!!!" << "\n";

				if (type_of_race == 1) {



					if (counter > 0) {
						std::cout << "\n" << "����������������� ������������ ��������: ";


						mass_vehicle[0].named();
						std::cout << " ";
						mass_vehicle[1].named();
						std::cout << " ";
						mass_vehicle[2].named();
						std::cout << " ";
						mass_vehicle[3].named();
					}


					std::cout << "\n" << race[0] << ". ���������� : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "�������� ��������� ��� 0 ��� ��������� �������� ����������� : " << "\n";

					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {All_terrain_boots boots(distance); if (named[0] == "�������-���������") {
						std::cout << "\n" << "�������-��������� ��� ����������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = boots; named[0] = "�������-���������"; Time[counter] = boots.Time(); counter++; break; }; }
					case 2: {std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					case 3: {Camel camel(distance); if (named[1] == "�������") {
						std::cout << "\n" << "������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = camel ; named[1] = "�������"; Time[counter] = camel.Time(); counter++; break; }; }
					case 4: {Centaur centaur(distance); if (named[2] == "�������") {
						std::cout << "\n" << "������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = centaur; named[2] = "�������"; Time[counter] = centaur.Time(); counter++; break; }; }
					case 5: {std::cout << "\n" << "����� ��� ���������� ������ ����������������" << "\n"; break; }
					case 6: {Speedycamel spcamel(distance); if (named[3] == "�������-��������") {
						std::cout << "\n" << "�������-�������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = spcamel; named[3] = "�������-��������"; Time[counter] = spcamel.Time(); counter++; break; }; }
					case 7: { std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					default: std::cout << "\n" << "������ �� ��� � �������" << "\n"; break;

					}
				}

				else if (type_of_race == 2) {

					if (counter > 0) {
						std::cout << "\n" << "����������������� ������������ ��������: ";

						mass_vehicle[0].named();
						std::cout << " ";
						mass_vehicle[1].named();
						std::cout << " ";
						mass_vehicle[2].named();

					}

					std::cout << "\n" << race[1] << " ���������� : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "�������� ��������� ��� 0 ��� ��������� �������� ����������� : " << "\n";

					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					case 2: {Broom broom(distance); if (named[0] == "�����") {
						std::cout << "\n" << "����� ��� ����������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = broom; named[0] = "�����"; Time[counter] = broom.Time(); counter++; break; }; }
					case 3: {std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					case 4: {std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					case 5: {Eagle eagle(distance); if (named[1] == "���") {
						std::cout << "\n" << "�Ш� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = eagle; named[1] = "���"; Time[counter] = eagle.Time(); counter++; break; }; }
					case 6: {std::cout << "\n" << "!!!����� ��� ���������� ������ ����������������!!!" << "\n"; break; }
					case 7: { Carpet_plane carpet(distance); if (named[2] == "����-������") {
						std::cout << "\n" << "��¨�-����˨� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = carpet; named[2] = "����-������"; Time[counter] = carpet.Time(); counter++; break; }; }
					default: std::cout << "\n" << "������ �� ��� � �������" << "\n"; break;

					}
				}
				else if (type_of_race == 3) {


					if (counter > 0) {
						std::cout << "\n" << "����������������� ������������ ��������: ";

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


					std::cout << "\n" << race[0] << " ���������� : " << distance << "\n" << type_vehicle[0] << "\n" << type_vehicle[1] << "\n" << type_vehicle[2] << "\n" << type_vehicle[3] << "\n" << type_vehicle[4] << "\n" << type_vehicle[5] << "\n" << type_vehicle[6] << "\n" << type_vehicle[7] << "\n" << "�������� ��������� ��� 0 ��� ��������� �������� ����������� : " << "\n";
					std::cin >> vehicle;
					switch (vehicle) {
					case 0: break;
					case 1: {All_terrain_boots boots(distance); if (named[0] == "�������-���������") {
						std::cout << "\n" << "�������-��������� ��� ����������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = boots; named[0] = "�������-���������"; Time[counter] = boots.Time(); counter++; break; }; }
					case 2: {Broom broom(distance); if (named[1] == "�����") {
						std::cout << "\n" << "����� ��� ����������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = broom; named[1] = "�����"; Time[counter] = broom.Time(); counter++; break; }; }
					case 3: {Camel camel(distance); if (named[2] == "�������") {
						std::cout << "\n" << "������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = camel; named[2] = "�������"; Time[counter] = camel.Time(); counter++; break; }; }
					case 4: {Centaur centaur(distance); if (named[3] == "�������") {
						std::cout << "\n" << "������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = centaur; named[3] = "�������"; Time[counter] = centaur.Time(); counter++; break; }; }
					case 5: {Eagle eagle(distance); if (named[4] == "���") {
						std::cout << "\n" << "�Ш� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = eagle; named[4] = "���"; Time[counter] = eagle.Time(); counter++; break; }; }
					case 6: {Speedycamel spcamel(distance); if (named[5] == "�������-��������") {
						std::cout << "\n" << "�������-�������� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = spcamel; named[5] = "�������-��������"; Time[counter] = spcamel.Time();  counter++; break; }; }
					case 7: { Carpet_plane carpet(distance); if (named[6] == "����-������") {
						std::cout << "\n" << "��¨�-����˨� ��� ���������������" << "\n"; break;
					}
						  else { mass_vehicle[counter] = carpet; named[6] = "����-������"; Time[counter] = carpet.Time(); counter++; break; }; }
					default: std::cout << "\n" << "������ �� ��� � �������" << "\n"; break;

					}
				}
				

			} while (vehicle != 0 || counter < 2);

			system("cls");

			if (vehicle == 0 && counter >= 2) {
				std::cout << "\n" << "1.���������������� ���������" << "\n";
				std::cout  << "2.������ �����" << "\n";
				std::cin >> start_game;
			}
			system("cls");
		}while (start_game != 2);

		
		std::cout << "\n" << "���������� �����: " << "\n";

		// ����������
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



		std::cout << "\n" << "1.�������� ��� ���� �����" << "\n" << "2. �����" << "\n";
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