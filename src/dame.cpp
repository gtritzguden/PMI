#include "dame.h"
#include "tour.h"
#include "fonctions.h"
#include <iostream>

dame::dame(int abs, int ord,int c,plateau& plt_){
    x=abs;
    y=ord;

    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece dame a été cree en "<<tab[x-1]<<y<<std::endl;
}


void dame::position(int& x_, int& y_) {
    x_=x;
    y_=y;
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La dame se trouve en "<< tab[x-1] << y <<std::endl;
}


int dame::seDeplacer(int xf, int yf, int c, plateau &plt, tour &t) { //on ne peut pas compiler si couleur ne sert à rien

    bool diagonale = abs(xf - x) == abs(yf - y);
    bool deplacementTour = (xf != 0 && yf == 0) || (xf == 0 && yf != 0);
    bool dansLesBornes = xf >= 1 && xf <= 8 && yf >= 1 && yf <= 8;

    if(!(diagonale || deplacementTour) || !dansLesBornes) {
        std::cout << "Ce coup est illegal aux echecs veuillez reessayer" << std::endl;
        return 0;
    }



    else if(deplacementTour){
        for(int i=x ; i<xf ; i++) { //Boucle pour vérifier qu'il n'y a aucune pièce entre x et xf
            if(estOccupe(i,y,plt)) {
                std::cout << "Vous ne pouvez pas passer par dessus une piece, veuillez recommencer"<< std::endl;
                return 0;
            }
        }

        for(int k=y ; k<yf ; k++) { //Boucle pour vérifier qu'il n'y a aucune pièce entre y et yf
            if(estOccupe(x,k,plt)) {
                std::cout << "Vous ne pouvez pas passer par dessus une piece, veuillez recommencer"<< std::endl;
                return 0;
            }
        }

        t.seDeplacer(xf,yf,c,plt);
        return 1;
    }


    else if(diagonale){
        for(int i=x ; i<xf ; i++) { //Boucle pour vérifier qu'il n'y a aucune pièce sur la diagonale sur laquelle la dame se déplace entre son point de départ et son point d'arrivé
            for(int k=y ; k<yf ; k++)
                if(estOccupe(i,k,plt)) {
                    std::cout << "Vous ne pouvez pas passer par dessus un pion, veuillez recommencer"<< std::endl;
                    return 0;
            }
        }

        x=xf;  //S'il n'y a pas de pièce sur le chemin, alors c'est bon on attribue xf à x et yf à y
        y=yf;
        std::cout<<"La dame se trouve en "<<static_cast<char>('a' + xf - 1)<<yf<<std::endl;
        return 2;
    }

    return 0;
}
