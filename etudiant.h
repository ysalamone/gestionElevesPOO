#include <iostream>
#include <vector>
using namespace std;

class Etudiant
{
	//Les propriétés
	private:
		string nom;
		string prenom;
		int numero;
	public:
		//Les methodes
		Etudiant(string leNom, string lePrenom, int leNumero);
		void affiche();
		void fromKeyboard();
		int retournerNumEleve();
};
