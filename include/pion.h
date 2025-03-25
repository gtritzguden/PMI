#pragma once
#include <iostream>
#include "pieces.h"


class pion : public pieces {
 	private :
         //rien pcq les attributs sont hérités de pièces

	public:
    	pion(int x, int y, int c);
    	void position(int& x, int& y);
    	int seDeplacer(int xf, int yf, int c, plateau& plt_); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
        bool reglesDeplacement(int x_, int y_, plateau& plt_);//Vérifie que le déplacement est dans les règles (limites + contraintes pièces)
            //nécessité de mettre le plateau en entrée pour vérifier les occupations
};