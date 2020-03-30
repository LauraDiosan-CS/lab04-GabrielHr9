#pragma once
#include"Controller.h"

class Console {
private:
	Controller& ctr;
public:
	Console(Controller& c): ctr{c}
	{}
	void adauga();
	void afisare() const;
	void stergere();
	void modif();
	void filtrare_titlu();
	//void filtrare_an();
	void sortare_titlu();
	void sortare_actor();
	void sortare_an();
	void comenzi() const;
	void start();
};