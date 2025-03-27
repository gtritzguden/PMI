#include "tour.h"
#include "plateau.h"
#include <iostream>


tour::tour(int abs, int ord, int c_, plateau& plt_){
    x = abs;
    y=ord;
    c=c_;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}


void tour::position(int& x_, int& y_) {
    x_=x;
    y_=y;
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le tour se trouve en "<< tab[x-1] << y <<std::endl;
}


int tour::seDeplacer(int xf, int yf, int c, plateau &plt) {
    bool deplacementValide = (xf != 0 && yf == 0) || (xf == 0 && yf != 0);

    bool dansLesBornes = xf >= 1 && xf <= 8 && yf >= 1 && yf <= 8;

    for(int i=x ; i<xf ; i++) {
        if(plt.estOccupe(i,y)) {
            std::cout << "Vous ne pouvez pas passer par dessus un pion, veuillez recommencer"<< std::endl;
            return 0;
        }
    }

    for(int k=y ; k<yf ; k++) {
        if(plt.estOccupe(x,k)) {
            std::cout << "Vous ne pouvez pas passer par dessus un pion, veuillez recommencer"<< std::endl;
            return 0;
        }
    }


    if(!deplacementValide && !dansLesBornes) {
        std::cout<<"Ce coup est illegal aux echecs, veuillez reesayer."<<std::endl;
        return 0;
    }
    else {
        x=xf;
        y=yf;
        std::cout<<"La tour se trouve en "<<xf<<yf<<std::endl;
        return 0;
    }
}

