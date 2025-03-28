#include <iostream>
#include "NicoFonction.h"
#include "plateau.h"



bool estUneTourBlanche(int x, int y, plateau &plt) {
    if(((abs(plt.getElt(x,y))-20 < 10) && plt.getElt(x,y)-20 > 0)) {
        return true;
    }
    else {
        return false;
    }
}

bool estUneTourNoire(int x, int y, plateau &plt) {
    if(((abs(plt.getElt(x,y))-20 < 10) && plt.getElt(x,y)-20 < 0)) {
        return true;
    }
    else {
        return false;
    }
}

bool estUneDameBlanche(int x, int y, plateau &plt) {
    if(((abs(plt.getElt(x,y))-40 < 10) && plt.getElt(x,y)-40 > 0)) {
        return true;
    }
    else {
        return false;
    }
}

bool estUneDameNoire(int x, int y, plateau &plt) {
    if(((abs(plt.getElt(x,y))-40 < 10) && plt.getElt(x,y)-40 < 0)) {
        return true;
    }
    else {
        return false;
    }
}


bool underControl(plateau &plt, int x, int y, int c) {
    char tab[8] = {'a','b','c','d','e','f','g','h'};

    bool estUnPionPrendNoir = (abs(plt.getElt(x+1,y+1)) -10 < 10);
    bool estUnPionPrendBlanc = (abs(plt.getElt(x-1,y-1)) -10 < 10);


    bool tourPresente = (abs(plt.getElt(x,y))-20 < 10);


    if(c>0) {
        if(estUnPionPrendNoir) { // On test s'il y a un pion noir en prise sur la case
            std::cout << "La case est controlee par un pion adverse" << std::endl;
            return false;
        }

        //très long code pour vérifier s'il y a une tour ou une dame en prise sur la ligne ou colonne de notre case.

        for(int i=0 ; i<x ; i++) { //On regarde s'il y a une pièce noire sur la même ligne que la notre
            if(estUneDameNoire(i,y,plt) ||  estUneTourNoire(i,y,plt)){ //Vérification de s'il y a une tour adverse sur la ligne
                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
                for(int k=i ; k<x ; k++) { //Est-ce que j'ai une pièce entre la pièce adverse et la mienne
                    if(plt.getElt(k,y) > 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }
        for(int l=x+1 ; l<=8 ; l++) { //On refait la même chose qu'au dessus mais de l'autre côté de la case
            if(estUneDameNoire(l,y,plt) ||  estUneTourNoire(l,y,plt)) {
                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
                for(int m=l ; m>x ; m--) {
                    if(plt.getElt(m,y) > 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }





        for(int o=0 ; o<y ; o++) { //On regarde s'il y a une pièce noire sur la même colonne que la notre
            if(estUneDameNoire(x,o,plt) ||  estUneTourNoire(x,o,plt)) { //Vérification de s'il y a une tour adverse sur la ligne
                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
                for(int p=o ; p<y ; p++) {
                    if(plt.getElt(x,p) > 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }
        for(int q=y+1 ; q<=8 ; q++) {
            if(estUneDameNoire(x,q,plt) ||  estUneTourNoire(x,q,plt)) {
                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
                for(int r=q ; r>y ; r--) {
                    if(plt.getElt(x,r) > 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }


        //Vérification s'il y a une dame en prise dans la diagonale ou pas

        for(int b = 0 ; b<8 ; b++) { //diagonale en haut à droite
            if(x+b<8 && y+b<8) {
                if(estUneDameNoire(x+b , y+b , plt)) {
                    std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
                }
                else if(plt.getElt(x+b,y+b)>0) {
                    std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                    break;
                }
            }
        }

        for(int c=0 ; c<8 ; c++) { //diagonale en haut à gauche
            if(x-c>0 && y+c<8) {
                if(estUneDameNoire(x-c, y+c, plt)) {
                    std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
                }
                else if(plt.getElt(x-c,y+c)>0) {
                    std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                    break;
                }
            }
        }


        for(int d=0 ; d<8 ; d++) { //diagonale en bas à droite
            if(x+d<8 && y-d>0) {
                if(estUneDameNoire(x+d, y-d, plt)) {
                    std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
                }
                else if(plt.getElt(x+d,y-d)>0) {
                    std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                    break;
                }
            }
        }


        for(int e=0 ; e<8 ; e++) { //diagonale en bas à gauche
            if(x-e>0 && y-e>0) {
                if(estUneDameNoire(x-e, y-e, plt)) {
                    std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
                }
                else if(plt.getElt(x-e,y-e)>0) {
                    std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                    break;
                }
            }
        }








    }
    else if(c<0) {
        if(estUnPionPrendBlanc) { // On test s'il y a un pion noir en prise sur la case
            std::cout << "La case est controlee par un pion" << std::endl;
            return false;
        }

        //très long code pour vérifier s'il y a une tour ou une dame en prise sur la ligne ou colonne de notre case.

        for(int i=0 ; i<x ; i++) { //On regarde s'il y a une pièce noire sur la même ligne que la notre
            if(estUneDameBlanche(i,y,plt) ||  estUneTourBlanche(i,y,plt)){ //Vérification de s'il y a une tour adverse sur la ligne
                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
                for(int k=i ; k<x ; k++) { //Est-ce que j'ai une pièce entre la pièce adverse et la mienne
                    if(plt.getElt(k,y) < 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }
        for(int l=x+1 ; l<=8 ; l++) { //On refait la même chose qu'au dessus mais de l'autre côté de la case
            if(estUneDameBlanche(l,y,plt) ||  estUneTourBlanche(l,y,plt)) {
                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
                for(int m=l ; m>x ; m--) {
                    if(plt.getElt(m,y) > 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }





        for(int o=0 ; o<y ; o++) { //On regarde s'il y a une pièce noire sur la même colonne que la notre
            if(estUneDameBlanche(x,o,plt) ||  estUneTourBlanche(x,o,plt)) { //Vérification de s'il y a une tour adverse sur la ligne
                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
                for(int p=o ; p<y ; p++) {
                    if(plt.getElt(x,p) < 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }
        for(int q=y+1 ; q<=8 ; q++) {
            if(estUneDameBlanche(x,q,plt) ||  estUneTourBlanche(x,q,plt)) {
                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
                for(int r=q ; r>y ; r--) {
                    if(plt.getElt(x,r) < 0) {
                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
                    }
                    else {
                        std::cout<<"La case est controlee par une tour"<<std::endl;
                    }
                }
            }
        }


    }

    //Vérification de s'il y a une dame blanche dans la diagonale

    for(int b = 0 ; b<8 ; b++) { //diagonale en haut à droite
        if(x+b<8 && y+b<8) {
            if(estUneDameBlanche(x+b , y+b , plt)) {
                std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
            }
            else if(plt.getElt(x+b,y+b)<0) {
                std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                break;
            }
        }
    }

    for(int c=0 ; c<8 ; c++) { //diagonale en haut à gauche
        if(x-c>0 && y+c<8) {
            if(estUneDameBlanche(x-c, y+c, plt)) {
                std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
            }
            else if(plt.getElt(x-c,y+c)<0) {
                std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                break;
            }
        }
    }


    for(int d=0 ; d<8 ; d++) { //diagonale en bas à droite
        if(x+d<8 && y-d>0) {
            if(estUneDameBlanche(x+d, y-d, plt)) {
                std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
            }
            else if(plt.getElt(x+d,y-d)<0) {
                std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                break;
            }
        }
    }


    for(int e=0 ; e<8 ; e++) { //diagonale en bas à gauche
        if(x-e>0 && y-e>0) {
            if(estUneDameBlanche(x-e, y-e, plt)) {
                std::cout<< "Une dame se trouve sur la diagonale en haut à droite de la case"<<std::endl;
            }
            else if(plt.getElt(x-e,y-e)<0) {
                std::cout<< "On ne sait pas s'il y a une dame, mais quoi qu'il en soit la case est protégée"<<std::endl;
                break;
            }
        }
    }
}
