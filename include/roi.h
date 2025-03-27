#pragma once
#include <iostream>
#include "plateau.h"

class roi{
private :

  	int x;
    int y;
    int c; //type et couleur de la pièce

  public:
    roi(int x, int y,int c, plateau& plt_);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c,plateau &plt); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
    bool estEnEchec(plateau& plt_,int x_, int y_); //la fonction doit vérrifer si une des pièces de couleur adverse peut atteindre le roi
    bool reglesDeplacement(int x_, int y_, plateau& plt_);
};