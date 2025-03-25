#include "pieces.h"
#include "tour.h"


tour::tour(int abs, int ord, int c) : pieces(abs, ord, 0){
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}


void tour::position(int& x_, int& y_) {
    x_=x;
    y_=y;
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le tour se trouve en "<< tab[x-1] << y <<std::endl;
}

int tour::seDeplacer(int xf, int yf, int c) {
  return 0;
}