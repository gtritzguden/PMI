#pragma once
#include <iostream>
#include "plateau.h"

class roi{
private :

  	int x;
    int y;
    int c;

  public:
    roi(int x, int y,int c, plateau& plt_);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */

};