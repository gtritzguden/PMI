#pragma once
#include <iostream>
#include "plateau.h"
#include"occupation.h"


class tour{
private:
	int x;
    int y;
    int c; //type et couleur de la pièce

public:
    tour(int x, int y,int ,plateau& plt_);
    void position(int& x_, int& y_);
    int seDeplacer(int xf, int yf, int c, plateau &plt_jeu, occupation& plt_occupation); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
};
