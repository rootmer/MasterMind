#include <iostream>
#include <string>

#include "otsake.h"

using namespace std;

int main(void) {
	int valinta = 99;
	int valikkolaskuri = 0;

	cout << "Tervetuloa Mastermindiin! P��valikkoon kirjoittamalla 1, lopetus 0. " << endl;
	do {
		if (valikkolaskuri > 0) cout << "Valitse 1 menn�ksesi p��valikkoon. 0 Lopettaa. " << endl;

		valinta = Valinta();

		if (valinta == 0) break;

		else if (valinta == 1) PaaValikko();

		else cout << "V��r� valinta! Valitse uudelleen, 0 tai 1. " << endl;
		valikkolaskuri++;

	} while (valinta != 0);



	return 0;
}