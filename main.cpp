/** Sis�llytet��n n�m� tarvittavat kirjastot */
#include <iostream>
#include <string>

/** Oman otsaketiedoston liitt�minen */
#include "otsake.h"

/** Pelk�st��n sit� varten ett� helposti cinit ja coutit k�yt�ss� */
using namespace std;

/** Ohjelman main, toiminnallisuus ulkoistettu ali.cpp -tiedostoon */
int main(void) {
	int valinta = 99;	// Alustetaan valikoissa siirtymiseen tarkoitettu muuttuja heti
	bool ohjettavailla = false;		// Sit� varten ett� saadaan alkuvalikkoon ohjeet joka toistokerralle		

	/** Ohjelman alkuvalikon opastus */
	cout << "Tervetuloa Mastermindiin! P��valikkoon kirjoittamalla 1, lopetus 0. " << endl;
	do {
		/** T�ss� siis aluvalikon opastus do-while silmukan sis�ll� */
		if (ohjettavailla == true) cout << "Valitse 1 menn�ksesi p��valikkoon. 0 Lopettaa. " << endl;

		/** Kutsutaan Valinta() .. Paluuna saadaan k�ytt�j�n haluama numero jolla siirryt��n ohjelman sis�ll� */
		valinta = Valinta();

		/** Ohjelman lopettava 0 -valinta */
		if (valinta == 0) break;

		/** Numerolla 1 varsinaiseen p��valikkoon */
		else if (valinta == 1) PaaValikko();

		/** Jos ohjeista huolimatta v��r� valinta niin ohjeet toistetaan */
		else cout << "V��r� valinta! Valitse uudelleen, 0 tai 1. " << endl;
		ohjettavailla = true;	// T�ss� siis muuttuja jolla varmistetaan ett� alkuvalikossa ohjeet

		/** Itseasiassa ehtolause 'valinta==0' korvaa t�m�n. Tarpeeton siin� mieless�.. */
	} while (valinta != 0);

	return 0;	// int tyyppisen main -funktion paluuarvo
}