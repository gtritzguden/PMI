#pragma once
#include <iostream>
#include "plateau.h"
#include "tour.h"
#include "occupation.h"


class dame{
    private :

        int x;
        int y;
        int c; //type et couleur de la pièce

public:
    dame(int x, int y,int c_, plateau& plt_jeu);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c, plateau &plt_jeu, occupation& plt_occupation, tour &t); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */

};
