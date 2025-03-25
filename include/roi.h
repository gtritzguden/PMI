#pragma once
#include <iostream>
#include "pieces.h"


class roi : public pieces{
private :
  //rien pcq hérité de pièces
public:
    roi(int x, int y,int c);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */

};