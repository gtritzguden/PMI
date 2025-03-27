#include"fonctions.h"

#include <cmath>



int sign(int e){
    if (e<0) {
        return -1;
    }
    return 1;
}

int underControl(const plateau& plt, int x, int y, int c) { //test diag, alentour, mm colonne et mm ligne, prend plateau de jeu
    // c fait reference a la couleur du plateau d'occupation
    // on remplie le plateau d'occupation blanc -> c=1

    //etat de controle (2) ou non (0)
    int danger=0;

    //les distances aux bords
    int dist_gauche=y;
    int dist_droite=8-y;
    int dist_haut=x;
    int dist_bas=8-x;

    //parcours de la ligne
    for (int i=1;i<dist_gauche;i++) { //vers la gauche
        int piece=plt.getElt(x,y-i); //on recupere la piece a cette position
        if (piece!=0) {
            //detection d'une piece
            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
                danger=0;
                break;
            }
            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
                danger=2;
                break;
            }
            else if(piece==c*41 && i==1) {
                danger=2;
            }
        }
    }
    for (int i=1;i<dist_droite;i++) { //parcours ligne vers la droite
        int piece=plt.getElt(x,y+i);
        if (piece!=0) {//detection d'une piece
            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
                danger=0;
                break;
            }
            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
                danger=2;
                break;
            }
            else if(piece==c*41 && i==1) {
                danger=2;
            }
        }
    }
    for (int i=1;i<dist_haut;i++) { //parcours colonne vers le haut
        int piece=plt.getElt(x+i,y);
        if (piece!=0) {//detection d'une piece
            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
                danger=0;
                break;
            }
            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
                danger=2;
                break;
            }
            else if(piece==c*41 && i==1) {
                danger=2;
            }
        }
    }
    for (int i=1;i<dist_bas;i++) { //parcours colonne vers le bas
        int piece=plt.getElt(x-i,y);
        if (piece!=0) {//detection d'une piece
            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
                danger=0;
                break;
            }
            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
                danger=2;
                break;
            }
            else if(piece==c*41 && i==1) {
                danger=2;
            }
        }
    }

    return danger;

}


double distance(int x1, int y1, int x2, int y2) { //donne la distance entre deux coordonnée
    return pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
}
