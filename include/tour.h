#pragma once
#include <iostream>
#include "pieces.h"


class tour : public pieces {
private:
	//rien pcq hérité de pieces

public:
    tour(int x, int y,int c);
    void position(int& x_, int& y_);
    int seDeplacer(int xf, int yf, int c); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
};
