#include"Film.h"
#include"Repository.h"
#include<assert.h>
#include<vector>
 
using namespace std;

void Repository::sterge(const int& poz) 
{

	list.erase(list.begin() + poz - 1);
}
void Repository::modif(const Film& f, const int& poz) {
	list[poz-1] = f;
}
void Test_Repo() {

	Repository Repo{};
	Film film{ "Avatar","Actiune",2012,"Eduard" };
	Repo.adauga(film);
	vector<Film> list = Repo.getAll();
	Film f = list.front();
	assert(f.getTitlu() == "Avatar");
	Film film1{ "Titanic","Romance",1980,"Leonardo" };
	Repo.adauga(film1);
	list = Repo.getAll();
	assert(list.size() == 2);
	Repo.sterge(2);
	list = Repo.getAll();
	assert(list.size() == 1);
	assert(list[0].getTitlu() == "Avatar");
	Repo.modif(film1, 1);
	list = Repo.getAll();
	assert(list[0].getTitlu() == "Titanic");

}