#include <iostream>
#include <conio.h>

#include "wassertank.h"


void Wassertank::setGroesse(int menge) {
	größe = menge;
}

void Wassertank::ausleeren() {
	füllstand = 0;
}

void Wassertank::fuellen(int menge) {
	if ((füllstand + menge) >= größe)
		füllstand = größe;
	else
		füllstand += menge;
}

int Wassertank::getFuelstand() {
	return füllstand;
}

