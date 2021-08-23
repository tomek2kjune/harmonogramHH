#include <iostream>
#include "Czas.h"

Czas::Czas(int s = 0, int m = 0, int g = 0)
{
	godziny = g;
	minuty = m;
	sekundy = s;
}

Czas::Czas() 
{
	godziny = 0;
	minuty = 0;
	sekundy = 0;
}

void Czas::poprawCzas()
{
	if (godziny < 0)
	{
		godziny = abs(godziny);
	}
	if (minuty < 0)
	{
		minuty = abs(minuty);
	}
	if (sekundy < 0)
	{
		sekundy = abs(sekundy);
	}
	while (sekundy > 59)
	{
		sekundy -= 60;
		minuty += 1;
	}
	while (minuty > 59)
	{
		minuty -= 60;
		godziny += 1;
	}
}

void Czas::wypisz_smg()
{
	poprawCzas();

	std::cout << std::endl << "Czas " << " (format smg)" << ": " << sekundy << ":" << minuty << ":" << godziny << std::endl;
}

void Czas::wypisz_sm()
{
	poprawCzas();

	int m;

	m = minuty + godziny * 60;

	std::cout << std::endl << "Czas " << " (format sm)" << ": " << sekundy << ":" << m << std::endl;
}

void Czas::wypisz_s()
{
	poprawCzas();

	int s;

	s = sekundy + minuty * 60 + godziny * 3600;

	std::cout << std::endl << "Czas " << " (format s)" << ": " << s << std::endl;
}

Czas Czas::operator+(Czas& _drugiCzas)
{
	Czas tymczasowy = _drugiCzas;
	tymczasowy.godziny += godziny;
	tymczasowy.minuty += minuty;
	tymczasowy.sekundy += sekundy;
	return tymczasowy;
}

Czas Czas::operator+(int _sekundy)
{
	Czas tymczasowy = 0;
	tymczasowy.sekundy = sekundy + _sekundy;
	tymczasowy.minuty = minuty;
	tymczasowy.godziny = godziny;
	return tymczasowy;
}

void Czas::operator==(Czas& _drugiCzas)
{
	int cz1_sek, cz2_sek;
	Czas tymczasowy = _drugiCzas;

	if (tymczasowy.sekundy == sekundy && tymczasowy.minuty == minuty && tymczasowy.godziny == godziny)
	{
		std::cout << std::endl << "Czasy sa rowne" << std::endl;
	}
	else
	{
		std::cout << std::endl << "Czasy nie sa rowne" << std::endl;
	}

	cz1_sek = daj_s();
	cz2_sek = tymczasowy.daj_s();

	if (cz1_sek > cz2_sek)
	{
		std::cout << std::endl << "Pierwszy czas jest wiekszy" << std::endl;
	}
	else if (cz2_sek > cz1_sek)
	{
		std::cout << std::endl << "Drugi czas jest wiekszy" << std::endl;
	}
}

int Czas::daj_s()
{
	int c;

	c = sekundy + minuty * 60 + godziny * 3600;

	return c;
}