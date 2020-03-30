#include<iostream>
#include"Console.h"

using namespace std;

void Console::adauga() {

	string titlu;
	cout << "Dati titlul:";
	getline(cin, titlu, '\n');
	cin >> titlu;
	string gen;
	cout << "Dati genul:";
	getline(cin, gen, '\n');
	cin >> gen;
	int an;
	cout << "Dati anul aparitie:";
	cin >> an;
	string actor;
	cout << "Dati actorul principal:";
	getline(cin, actor, '\n');
	cin >> actor;
	ctr.adauga(titlu, gen, an, actor);
	cout << "\n";
	cout << "Film adaugat!" << "\n";
	cout << "\n";
}

void Console::afisare() const {
	auto list = ctr.getAll();
	int i = 1;
	cout << "\n";
	for (const Film& f : list) {
		cout << i << ". " << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor() << "\n";
		i++;
	}
	if (list.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";

}

void Console::stergere() {
	afisare();
	int poz;
	cout << "Dati pozitia:";
	cin >> poz;
	ctr.sterge(poz);
	cout << "\n";
	cout << "Stergere efectuata cu succes!\n";
	cout << "\n";
}

void Console::modif() {
	afisare();
	int poz;
	cout << "Dati pozitia filmului:";
	cin >> poz;
	string titlu;
	cout << "Dati titlul:";
	getline(cin, titlu, '\n');
	cin >> titlu;
	string gen;
	cout << "Dati genul:";
	getline(cin, gen, '\n');
	cin >> gen;
	int an;
	cout << "Dati anul aparitie:";
	cin >> an;
	string actor;
	cout << "Dati actorul principal:";
	getline(cin, actor, '\n');
	cin >> actor;
	ctr.modif(poz, titlu, gen, an, actor);
	cout << "\n";
	cout << "Elementul a fost modificat!\n";
	cout << "\n";
}
void Console::filtrare_titlu() {
	string titlu;
	vector<Film> lista;
	cout << "Dati titlul:";
	getline(cin, titlu, '\n');
	cin >> titlu;
	lista = ctr.filtrare_titlu(titlu);
	cout << "\n";
	for (const Film& f : lista)
		cout << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor()<< "\n";
	if (lista.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";
}
/*void Console::filtrare_an() {
	int an;
	cout << "Dati anul:";
	cin >> an;
	vector<Film> lista = ctr.filtrare_an(an);
	cout << "\n";
	for (const Film& f : lista)
		cout << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor() << "\n";
	if (lista.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";
}
*/

void Console::sortare_titlu() {
	vector<Film> list = ctr.sortare_titlu();
	cout << "\n";
	for (const Film& f : list)
		cout << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor() << "\n";
	if (list.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";
}

void Console::sortare_actor() {
	vector<Film> list = ctr.sortare_actor();
	cout << "\n";
	for (const auto& f : list)
		cout << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor() << "\n";
	if (list.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";

}
void Console::sortare_an() {
	vector<Film> list = ctr.sortare_an();
	cout << "\n";
	for (const Film& f : list)
		cout << f.getTitlu() << " " << f.getGen() << " " << f.getAn() << " " << f.getActor() << "\n";
	if (list.size() == 0)
		cout << "Nu exista elemente de afisat!\n";
	cout << "\n";

}
void Console::comenzi() const {
	cout << "0.Iesire\n1.Adaugare\n2.Afisare\n3.Sterge\n4.Modificare\n5.Filtrare dupa titlu\n6.Filtrare dupa an\n7.Sortare dupa titlu\n8.Sortare dupa actor principal\n9.Cautare film\n10.Sortare anul aparitiei+gen\nDati comanda:";
}

void Console::start() {
	while (true) {
		comenzi();
		int cmd;
		cin >> cmd;
		if (cmd == 1)
			adauga();
		else if (cmd == 2)
			afisare();
		else if (cmd == 3)
			stergere();
		else if (cmd == 4)
			modif();
		else if (cmd == 5)
			filtrare_titlu();
		else if (cmd == 6)
			//filtrare_an();
			return;
		else if (cmd == 7)
			sortare_titlu();
		else if (cmd == 8)
			sortare_actor();
		else if (cmd == 9)
			filtrare_titlu();
		else if (cmd == 10)
			sortare_an();
		else
			break;

	}

}