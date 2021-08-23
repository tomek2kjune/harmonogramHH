#include <iostream>
#include <windows.h>
#include "Harmonogram.h"

//funkcja glowna programu 
int main() 
{
	Czas c1(12, 4, 15);
	Czas c2(34, 74, 25);
	Czas c3(1, 4, 45);
	Czas c4(82, 42, 46);
	Czas c5(10, 0, 25);

	Harmonogram h_start;

	h_start.inicjalizuj(c1);
	h_start.inicjalizuj(c2);
	h_start.inicjalizuj(c3);
	h_start.inicjalizuj(c4);
	h_start.inicjalizuj(c5);

	Harmonogram h_n;
	int pojemnosc;
	Harmonogram h_zakres;
	int nr_z;
	Czas czas;
	int nr_c, ile;

	std::cout << "MENU" << std::endl;
	std::cout << "1. Stworz harmonogram n czasow" << std::endl;
	std::cout << "2. Stworz harmonogram czasow, których suma jest w zakresie danego czasu" << std::endl;
	std::cout << "3. Zwieksz wybrany czas o ilosc sekund" << std::endl;
	std::cout << "4. Wyjscie" << std::endl << std::endl;

	while (1)
	{
		int x;
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
			std::cout << "Podaj ilosc czasow: ";
			std::cin >> pojemnosc;
			h_n = h_start.kopiuj_n(pojemnosc);
			break;
		case 2:
			std::cout << "Podaj numer czasu zakresowego: ";
			std::cin >> nr_z;
			h_zakres = h_start.kopiuj_zakres(h_start.dajCzas(nr_z - 1));
			break;
		case 3:
			std::cout << "Podaj numer czasu do zwiekszenia: ";
			std::cin >> nr_c;
			std::cout << "Podaj ilosc sekund do dodania: ";
			std::cin >> ile;
			h_start.dajCzas(nr_c - 1) = h_start.dajCzas(nr_c - 1) + ile;
			break;
		case 4:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Nie ma takiej opcji :/");
		}
		Sleep(1000);
		system("CLS");
		std::cout << "MENU" << std::endl;
		std::cout << "1. Stworz harmonogram n czasow" << std::endl;
		std::cout << "2. Stworz harmonogram czasow, których suma jest w zakresie danego czasu" << std::endl;
		std::cout << "3. Zwieksz wybrany czas o ilosc sekund" << std::endl;
		std::cout << "4. Wyjscie" << std::endl << std::endl;
	}

	return 0;
}