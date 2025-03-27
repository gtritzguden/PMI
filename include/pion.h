#pragma once
#include <iostream>
#include "plateau.h"
#include"occupation.h"


class pion{
 	private :
         int x;
         int y;
         int c; //type et couleur de la pièce

	public:
    	pion(int x_, int y_, int c_, plateau& plt_);
    	void position(int& x, int& y);
    	bool seDeplacer(int xf, int yf,int c, plateau& plt_, occupation& occ_); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
        bool reglesDeplacement(int x_, int y_, occupation& occ_);//Vérifie que le déplacement est dans les règles (limites + contraintes pièces)
            //nécessité de mettre le plateau en entrée pour vérifier les occupations
};