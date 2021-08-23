#include <iostream>

class Czas
{
private:
	int godziny;
	int minuty;
	int sekundy;
public:
	Czas(int s, int m, int g); //tworzy czas
	Czas(); //tworzy czas wyzerowany
	void wypisz_smg(); //wy?wietla czas w sek:min:godz
	void wypisz_sm(); //wy?wietla czas w sek:min
	void wypisz_s(); //wy?wietla czas w sek
	void poprawCzas(); //poprawia czas
	Czas operator+(Czas& _innyczas); //dodaje czas do czasu
	Czas operator+(int _sekundy); //dodaje sekundy do czasu
	void operator==(Czas& _drugiczas); //porównuje czasy
	int daj_s(); //zwraca czas w sek
};