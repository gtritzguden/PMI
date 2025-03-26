#pragma once
#include <iostream>
#include "plateau.h"


class tour{
private:
	int x;
    int y;
    int c;

public:
    tour(int x, int y,int ,plateau& plt_);
    void position(int& x_, int& y_);
    int seDeplacer(int xf, int yf, int c, plateau &plt); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
};
