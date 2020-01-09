#include "cMatrice.h"

//Constructeur de matrice
cMatrice::cMatrice(float nLigne1, float nLigne2, float nLigne3)
{
	this->nMat[0][0] = nLigne1;
	this->nMat[1][0] = nLigne2;
	this->nMat[2][0] = nLigne3;
	this->nMat[0][1] = nLigne1;
	this->nMat[1][1] = nLigne2;
	this->nMat[2][1] = nLigne3;
}

// affichMat////////////////////////////
//
//BUT : Afficher une matrice.
//
//PRINCIPE : Avec 2 boucle pour imbriquées, on travers la matrice pour en afficher chaque valeur.
//
//ENTREE : La matrice en instance.
//
//SORTIE : L'affichage de la matrice
///////////////////////////////////////////////////
void cMatrice::affichMat() {
	
	int i, j;

	for (i = 0; i < 3; i++) {
		std::cout << "\n";
		for (j = 0; j < 2; j++) {
			std::cout << nMat[i][j] << " | ";
		}
	}
}

