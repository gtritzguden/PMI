#pragma once
#include <iostream>
#include "pieces.h"


class pion : public pieces {
private:
    int couleur; /*0 pour blanc et 1 pour noir*/
    int x; /* [a:h] */
    int y; /*[1:8]*/
public:
    pion(int x, int y);
    void position(int &x, int &y);
    void seDeplacer(int x, int y, int c); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
    ~pion();
};


pion::pion(int abs, int ord){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece roi a été cree en "<<tab[x-1]<<y<<std::endl;
}