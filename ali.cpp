/** Tarvittavien kirjastojen k�ytt��notto */
#include <iostream>

/** Sis�llytet��n otsake jossa prototyypit jne */
#include "otsake.h"

/** Helpottaa cinien ja coutien k�ytt�� */
using namespace std;


/** Kutsu p��valikkoon */
void PaaValikko() {
	cout << "Paikkana on PaaValikko" << endl;
}

/** Varsinainen pelin funktio, joka sis�lt�� kaikenlaiset
*	peliss� tarvittavan �lyn ja toiminnallisuuden. 'moodi'
*	tarkoitus vaikuttaa pelin vaikeustasoon.
*/
void Peli(int moodi) {
}

/** Numeeriseen valintaan suunniteltu funktio */
int Valinta() {
	int valinta = 99;
	cin >> valinta;
	return valinta;
}