#pragma once
#include "pieces.h"
#include "tour.h"


tour::tour(int abs, int ord) : pieces(abs, ord, 0){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}


void tour::position() {
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le tour se trouve en "<< tab[x-1] << y <<std::endl;
}