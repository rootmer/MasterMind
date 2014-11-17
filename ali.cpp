/** Tarvittavien kirjastojen käyttöönotto */
#include <iostream>

/** Sisällytetään otsake jossa prototyypit jne */
#include "otsake.h"

/** Helpottaa cinien ja coutien käyttöä */
using namespace std;


/** Kutsu päävalikkoon */
void PaaValikko() {
	cout << "Paikkana on PaaValikko" << endl;
}

/** Varsinainen pelin funktio, joka sisältää kaikenlaiset
*	pelissä tarvittavan älyn ja toiminnallisuuden. 'moodi'
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