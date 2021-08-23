#include <iostream>
#include "Harmonogram.h"

void Harmonogram::inicjalizuj(Czas czas)
{	
	czasy.push_back(czas);

	ilosc = czasy.size();
}

Czas Harmonogram::dajCzas(int indeks)
{
	return czasy[indeks];
}

int Harmonogram::dajIlosc()
{
	return ilosc;
}

Czas Harmonogram::suma()
{
	Czas c;

	for (int i = 0; i < czasy.size(); ++i)
	{
		c = c + czasy[i];
	}

	return c;
}

void Harmonogram::wypisz_czasy()
{
	for (int i = 0; i < czasy.size(); ++i)
	{
		czasy[i].wypisz_smg();
	}
}

Harmonogram Harmonogram::kopiuj_n(int pojemnosc)
{
	Harmonogram h;

	h.czasy = czasy;
	h.czasy.resize(pojemnosc);

	return h;
}

Harmonogram Harmonogram::kopiuj_zakres(Czas zakres)
{
	Harmonogram h;
	int maks = 0;
	
	for (int i = 0; i < czasy.size(); ++i)
	{
		if ((maks += czasy[i].daj_s()) < zakres.daj_s())
		{
			h.czasy.push_back(czasy[i]);
		}
	}

	return h;
}

	

