#pragma once

#include<iostream>
#include<string>

using namespace std;

class Film {
private:
	string titlu;
	string gen;
	int anul_ap;
	string actor_pr;
public:
	string getTitlu() const
	{
		return titlu;
	}
	string getGen() const
	{
		return gen;

	}
	int getAn() const
	{
		return anul_ap;
	}
	string getActor() const
	{
		return actor_pr;
	}
	Film(string titlu, string gen, int anul_ap, string actor_pr):
		titlu{titlu},gen{gen},anul_ap{anul_ap},actor_pr{actor_pr}
	{}
	Film(const Film& ot): titlu{ot.titlu}, gen{ot.gen},anul_ap{ot.anul_ap},actor_pr{ot.actor_pr}
	{
		//Constructor de copiere
		//cout << "Copiere Film" << "\n";
	}
};

void Test_film();

