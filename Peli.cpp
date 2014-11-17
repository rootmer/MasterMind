/** Pelin ydin kunnon luokkana 
*
*
*/
class Peli {

	/** Luokan kaikki jäsenet näkyvyydellä public */
public:
	Peli::Peli(int vaikeus) {
		// Olion constructor
	}

	Peli::Peli() {
		// Tarkoitus että tämä arpoo vaikeustason
	}

	Peli::~Peli() {
		// Peli -olion destructor
	}

	/** Luokan kaikki jäsenet näkyvyydelä private */
private:
	int vaikeustaso;
	int numeroita;
	int arvauksialkm;
	
};