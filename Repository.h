#pragma once
#include<vector>
#include"Film.h"

class Repository {
private:
	vector<Film> list;
public:
	//Constructor
	Repository(){}
	//Nu se mai pot copia obiecte de tip Repository
	Repository(const Repository& ot) = delete;
	/*
	Adauga o entitate de tip Film
	Input:
	f de tip Film
	*/
	void adauga(const Film& f) 
	{
		list.push_back(f);
	}
	//Returneaza toate entitatile din repository
	vector <Film>& getAll() 
	{
		return this->list;
	}
	/*
	Sterge o entitate din repository
	Input:
	poz:pozitia pe care se afla elementul in lista
	*/
	void sterge(const int& poz);
	/*
	Modifica o entitate existenta
	Input:
	f: de tip film
	*/
	void modif(const Film& f, const int& poz);
};

void Test_Repo();