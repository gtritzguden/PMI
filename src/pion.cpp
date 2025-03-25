#pragma once
#include "pion.h"
#include "pieces.h"

pion::pion(int abs, int ord) : pieces(abs, ord, 0){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}

void pion::position() {
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le pion se trouve en "<< tab[x-1] << y <<std::endl;
}