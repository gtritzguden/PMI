#include "pion.h"
#include "pieces.h"
pion::pion(int abs, int ord, int c) : pieces(abs, ord, 0){

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}

void pion::position(int& x_, int& y_) {
    x_=x;
    y_=y; // on récupère dans les références ce qu'on veut
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le pion se trouve en "<< tab[x-1] << y <<std::endl;

}

int pion::seDeplacer(int xf, int yf, int c) {
    return 0;
}