// EvalCPP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "cVecteur.h"
#include "cMatrice.h"
#include <iostream>

int main()
{
	cVecteur vect1(1, 2, 3);
	cMatrice mat1(1, 2, 3);
	mat1.affichMat();
	vect1.prodVectAmi(mat1);
	//Le résultat devrait être 2,8,18

}

