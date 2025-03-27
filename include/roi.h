#pragma once
#include "plateau.h"
#include "occupation.h"

class roi{
private :

  	int x;
    int y;
    int c; //type et couleur de la pièce

  public:
    roi(int x, int y,int c, plateau& plt_);
    void position(int& x, int& y);
    int seDeplacer(int xf, int yf, int c,plateau &plt, occupation& occ); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
    bool estEnEchec(occupation& occ,int x_, int y_,plateau& plt); //la fonction doit vérrifer si une des pièces de couleur adverse peut atteindre le roi
    bool reglesDeplacement(int x_, int y_, occupation& occ_);
};