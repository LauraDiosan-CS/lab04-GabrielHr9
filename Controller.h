#pragma once

#include"Film.h"
#include"Repository.h"

class Controller {
private:
	Repository& repo;
public:
	//Constructor controller
	Controller(Repository& r) : repo{ r }
	{}
	/*
	Adauga o noua entitate de tip Film
	Input:
	titlu: de tip string
	gen: de tip string
	an: de tip int
	actor:de tip string
	*/
	void adauga(const string& titlu, const string& gen, int an, const string& actor) {
		Film f{ titlu,gen,an,actor };
		repo.adauga(f);
	}
	//Returneaza toate entitatile din controller
	vector<Film> getAll() const{
		return repo.getAll();
	}
	/*
	Sterge o entitate din controller
	Input:
	poz: pozitia pe care se afla elemtul in list
	*/
	void sterge(int poz) {
		repo.sterge(poz);
	}
	/*
	Modifica o entitate existenta
	Input:
	poz:pozitia din lista de pe care se modifica
	titlu: de tip string
	gen: de tip string
	an: de tip int
	actor:de tip string
	*/
	void modif(const int& poz, const string& titlu, const string& gen, int an, const string& actor) {
		Film film{ titlu,gen,an,actor };
		repo.modif(film, poz);
	}
	/*
	filtreaza lista dupa titlu
	Input:
	titlu: de tip string
	*/
	vector<Film> filtrare_titlu(const string& titlu);
	/*
	filtreaza lista dupa titlu
	Input:
	an: de tip int
	*/
	//vector<Film> filtrare_an(int an);
	/*
	Sorteaza lista dupa titlu
	*/
	vector<Film> sortare_titlu();
	/*
	Sorteaza lista dupa actorul principal
	*/
	vector<Film> sortare_actor();
	/*
	Sorteaza lista dupa anul aparitiei si gen
	*/
	vector<Film> sortare_an();
};

void Test_Controller();
