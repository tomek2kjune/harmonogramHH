#include <iostream>
#include <vector>
#include "Czas.h"

class Harmonogram
{
private:
	std::vector<Czas> czasy; //wektor czas�w
	int ilosc = 0; 
public:
	void inicjalizuj(Czas czas); //dodaje czas na koniec harmonogramu
	Czas dajCzas(int indeks); //zwraca czas
	int dajIlosc(); //zwraca ilosc czas�w w harmonogramie
	Czas suma(); //zwraca sum? czas�w w harmonogramie
	void wypisz_czasy(); //wy?wietla czasy z harmonogramu
	Harmonogram kopiuj_n(int pojemnosc); //kopiuje n czas�w do innego harmonogramu
	Harmonogram kopiuj_zakres(Czas zakres); //kopiuje czasy, kt�rych suma mie?ci si? w podanym czasie, do innego harmonogramu
};

