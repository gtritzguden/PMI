#include "pieces.h"
#include "roi.h"

roi::roi(int abs, int ord,int c) : pieces(abs, ord, c){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece roi a été cree en "<<tab[x-1]<<y<<std::endl;
}


void roi::position(int& x_, int& y_) {
    x_=x;
    y_=y;
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le roi se trouve en "<< tab[x-1] << y <<std::endl;
}


int roi::seDeplacer(int xf, int yf, int c) { //on ne peut pas compiler si couleur ne sert à rien

    if(xf-x > 1 || xf-x < -1 || yf-y > 1 || yf-y < -1) {
        std::cout<<"Ce mouvement est illégal aux échecs, essayez autre chose" << std::endl;
        return 0;
    }
    else {
        x=xf;
        y=yf;
        return 0;
    }
}

