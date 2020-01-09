#include "cVecteur.h"
#include "cMatrice.h"

#include <iostream>
//Constructeur avec param�tres
cVecteur::cVecteur(float f_X, float f_Y, float f_Z)
{
	this->f_X = f_X;
	this->f_Y = f_Y;
	this->f_Z = f_Z;
}


// prodVectAmi////////////////////////////
//
//BUT : Calculer le produit d'un vecteur 3d et d'une matrice
//
//PRINCIPE :La fonction affiche le r�sultat selon la formule qui consiste a multipli� et addition� les valeurs du vecteur et de la matrice de m�me ligne.
//
//ENTREE : Le vecteur en instance et une matrice.
//
//SORTIE : L'affichage du r�sultat
///////////////////////////////////////////////////
void cVecteur::prodVectAmi(cMatrice cMat) 
{


	std::cout << "\nLe produit du vecteur et de la matrice est :\n";
	std::cout << (this->f_X * cMat.nMat[0][0]) + (this->f_X * cMat.nMat[0][1]) << "\n";
	std::cout << (this->f_Y * cMat.nMat[1][0]) + (this->f_Y * cMat.nMat[1][1]) << "\n";
	std::cout << (this->f_Z * cMat.nMat[2][0]) + (this->f_Z * cMat.nMat[2][1]) << "\n";



}