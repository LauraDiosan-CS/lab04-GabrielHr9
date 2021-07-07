#include"Film.h"
#include"Repository.h"
#include"Controller.h"
#include<vector>
#include<assert.h>

vector<Film> Controller::filtrare_titlu(const string& titlu) {

	vector<Film> all{};
	for (const auto& f : getAll())
		if (f.getTitlu() == titlu)
			all.push_back(f);
	return all;

}

/*vector<Film> Controller::filtrare_an(const int& an) {

	vector<Film> all{};
	for (const auto& f : getAll())
		if (f.getAn() == an)
			all.push_back(f);
	return all;
}
*/

vector<Film> Controller::sortare_titlu() {

	vector<Film> list = getAll();
	for (int i=0;i<list.size();i++)
		for (int j=i+1;j<list.size();j++)
			if (list[i].getTitlu() > list[j].getTitlu()) {
				Film aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
	return list;

}

vector<Film> Controller::sortare_actor() {

	vector<Film> list = getAll();
	for (int i = 0; i<list.size(); i++)
		for (int j = i + 1; j<list.size(); j++)
			if (list[i].getActor() > list[j].getActor()) {
				Film aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
	return list;

}

vector<Film> Controller::sortare_an() {

	vector<Film> list = getAll();
	for (int i = 0; i<list.size(); i++)
		for (int j = i + 1; j<list.size(); j++)
			if (list[i].getAn() > list[j].getAn()) {
				Film aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
	for (int i = 0; i < list.size(); i++) 
		for (int j=i+1;j<list.size();j++)
			if (list[i].getAn() == list[j].getAn() && list[i].getGen() > list[j].getGen()) {
				Film aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
	return list;

}



void Test_Controller(){


	Repository repo{};
	Controller ctr{ repo };
	ctr.adauga("Avatar", "Actiune", 2012, "Ed");
	vector<Film> list = ctr.getAll();
	Film f = list.front();
	assert(f.getTitlu() == "Avatar");
	ctr.adauga("Titanic", "Romance", 1980, "Leonardo");
	list = ctr.getAll();
	assert(list.size() == 2);
	ctr.sterge(2);
	list = ctr.getAll();
	assert(list.size() == 1);
	assert(list[0].getTitlu() == "Avatar");
	ctr.modif(1,"Titanic", "Romance", 1980, "Leonardo");
	list = ctr.getAll();
	assert(list[0].getTitlu() == "Titanic");
	ctr.adauga("Avatar", "Actiune", 2012, "Ed");
	vector<Film> all = ctr.filtrare_titlu("Avatar");
	assert(all[0].getTitlu() == "Avatar");
	//vector<Film> all_an = ctr.filtrare_an(1980);
	//assert(all_an[0].getAn() == 1980);
	//assert(all_an.size() == 1);
	vector<Film> all_t = ctr.sortare_titlu();
	assert(all_t[0].getTitlu() == "Avatar");
	vector<Film> all_a = ctr.sortare_actor();
	assert(all_a[0].getActor() == "Ed");
	ctr.adauga("ABC", "Actiune", 1980, "Leo");
	vector<Film> all_s = ctr.sortare_an();
	assert(all_s[0].getGen() == "Actiune");


}