/** Sisällytetään nämä tarvittavat kirjastot */
#include <iostream>
#include <string>

/** Oman otsaketiedoston liittäminen */
#include "otsake.h"

/** Pelkästään sitä varten että helposti cinit ja coutit käytössä */
using namespace std;

/** Ohjelman main, toiminnallisuus ulkoistettu ali.cpp -tiedostoon */
int main(void) {
	int valinta = 99;	// Alustetaan valikoissa siirtymiseen tarkoitettu muuttuja heti
	bool ohjettavailla = false;		// Sitä varten että saadaan alkuvalikkoon ohjeet joka toistokerralle		

	/** Ohjelman alkuvalikon opastus */
	cout << "Tervetuloa Mastermindiin! Päävalikkoon kirjoittamalla 1, lopetus 0. " << endl;
	do {
		/** Tässä siis aluvalikon opastus do-while silmukan sisällä */
		if (ohjettavailla == true) cout << "Valitse 1 mennäksesi päävalikkoon. 0 Lopettaa. " << endl;

		/** Kutsutaan Valinta() .. Paluuna saadaan käyttäjän haluama numero jolla siirrytään ohjelman sisällä */
		valinta = Valinta();

		/** Ohjelman lopettava 0 -valinta */
		if (valinta == 0) break;

		/** Numerolla 1 varsinaiseen päävalikkoon */
		else if (valinta == 1) PaaValikko();

		/** Jos ohjeista huolimatta väärä valinta niin ohjeet toistetaan */
		else cout << "Väärä valinta! Valitse uudelleen, 0 tai 1. " << endl;
		ohjettavailla = true;	// Tässä siis muuttuja jolla varmistetaan että alkuvalikossa ohjeet

		/** Itseasiassa ehtolause 'valinta==0' korvaa tämän. Tarpeeton siinä mielessä.. */
	} while (valinta != 0);

	return 0;	// int tyyppisen main -funktion paluuarvo
}