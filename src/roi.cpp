#pragma once
#include "pieces.h"
#include "roi.h"

roi::roi(int abs, int ord) : pieces(abs, ord, 0){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece roi a été cree en "<<tab[x-1]<<y<<std::endl;
}


void roi::position() {
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le roi se trouve en "<< tab[x-1] << y <<std::endl;
}


int roi::seDeplacer(int xf, int yf, int c) {
    if(xf-x > 1 || xf-x < -1 || yf-y > 1 || yf-y < -1) {
        std::cout<<"Ce mouvement est illégal aux échecs, essayez autre chose" << std::endl;
        return 0;
    }
    else {
        x=xf;
        y=yf;
        position();
        return 0;
    }
}

