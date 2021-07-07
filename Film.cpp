#include"Film.h"
#include<assert.h>

void Test_film() {
	
	Film film{ "Avatar", "actiune", 2012, "Ed" };
	assert(film.getTitlu() == "Avatar");
	assert(film.getGen() == "actiune");
	assert(film.getAn() == 2012);
	assert(film.getActor() == "Ed");
}