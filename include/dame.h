#pragma once
#include <iostream>
#include "plateau.h"
#include "tour.h"


class dame{
    private :

        int x;
        int y;
        int c;

public:
    dame(int x, int y,int c, plateau& plt_);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c, plateau &plt, tour &t); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */

};
