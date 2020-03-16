#ifndef CONSOLA_H_
#define CONSOLA_H_

#include "../controller/tranzactieCtrl.h"
#include "../utils/vector.h"

#include <stdio.h>


typedef struct Consola
{
	Controller* ctrl;
} Consola;

Consola* consolaCreate (Controller* ctrl);
void consolaDestroy (Consola* ctrl);

void consolaAdauga (Consola* ctrl);
void consolaModifica (Consola* ctrl);
void consolaSterge (Consola* ctrl);
void consolaCriteriu (Consola* ctrl);
void consolaOrdonat (Consola* ctrl);

void runMenu (Consola* ctrl);


#endif /* CONSOLA_H_*/
