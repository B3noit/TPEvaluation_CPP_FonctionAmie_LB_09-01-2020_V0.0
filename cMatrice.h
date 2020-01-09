#pragma once
#include <iostream>
#include "cVecteur.h"



class cMatrice
{
private:
	float nMat[3][2];//Dans cet exemple, la matrice nMat est une matrice de 3 lignes et 2 colonnes.

public:
	//Le constructeur avec paramètres
	cMatrice(float nLigne1, float nLigne2, float nLigne3);

	void affichMat();//La fonction qui affiche la matrice
	friend void cVecteur::prodVectAmi(cMatrice cMat);//la fonction amie de cMatrice déclarée dans vecteur.
};

