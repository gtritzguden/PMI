#include"fonctions.h"

#include <cmath>
#include <iostream>
#include <ostream>


int sign(int e){
    if (e<0) {
        return -1;
    }
    return 1;
}

//int underControl(const plateau& plt, int x, int y, int c) { //test diag, alentour, mm colonne et mm ligne, prend plateau de jeu
//    // c fait reference a la couleur du plateau d'occupation
//    // on remplie le plateau d'occupation blanc -> c=1
//
//    //etat de controle (2) ou non (0)
//    int danger=0;
//
//    //les distances aux bords
//    int dist_gauche=y;
//    int dist_droite=8-y;
//    int dist_haut=x;
//    int dist_bas=8-x;
//
//    //parcours de la ligne
//    for (int i=1;i<dist_gauche;i++) { //vers la gauche
//        int piece=plt.getElt(x,y-i); //on recupere la piece a cette position
//        std::cout<<piece<<std::endl;
//        if (piece!=0) {
//            //detection d'une piece
//            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
//                danger=0;
//                break;
//            }
//            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
//                danger=2;
//            }
//            else if(piece==c*41 && i==1) {
//                danger=2;
//            }
//        }
//    }
//    for (int i=1;i<dist_droite;i++) { //parcours ligne vers la droite
//        int piece=plt.getElt(x,y+i);
//        if (piece!=0) {//detection d'une piece
//            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
//                danger=0;
//                break;
//            }
//            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
//                danger=2;
//            }
//            else if(piece==c*41 && i==1) {
//                danger=2;
//            }
//        }
//    }
//    for (int i=1;i<dist_haut;i++) { //parcours colonne vers le haut
//        int piece=plt.getElt(x+i,y);
//        if (piece!=0) {//detection d'une piece
//            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
//                danger=0;
//                break;
//            }
//            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
//                danger=2;
//            }
//            else if(piece==c*41 && i==1) {
//                danger=2;
//            }
//        }
//    }
//    for (int i=1;i<dist_bas;i++) { //parcours colonne vers le bas
//        int piece=plt.getElt(x-i,y);
//        if (piece!=0) {//detection d'une piece
//            if ((10<abs(piece))&&(abs(piece)<19)) {//la piece est un pion noir ou blanc
//                danger=0;
//                break;
//            }
//            else if(piece==c*21||piece==c*22||piece==c*31||piece==c*32) { //piece est une tour ou une dame
//                danger=2;
//            }
//            else if(piece==c*41 && i==1) {
//                danger=2;
//            }
//        }
//    }
//
//    return danger;
//
//}


int underControl(const plateau& plt, int x, int y, int c) {
    // c fait référence à la couleur du plateau d'occupation

    int danger = 0;

    // Les distances aux bords
    int dist_gauche = y;
    int dist_droite = 8 - y - 1;  // Corrigé pour éviter les dépassements
    int dist_haut = x;
    int dist_bas = 8 - x - 1;

    // Parcours vers la gauche
    for (int i = 1; i <= dist_gauche; i++) {  // Utilisation de <=
        if ((y - i) < 0) break;  // Vérifie que l'indice reste valide
        int piece = plt.getElt(x, y - i);  // Pas de dépassement d'indice
        if (piece != 0) {
            if ((10 < abs(piece)) && (abs(piece) < 19)) {  // La pièce est un pion
                return 0;
            } else if (piece == c * 21 || piece == c * 22 || piece == c * 31 || piece == c * 32) {
                return 2;
            } else if (piece == c * 41 && i == 1) {
                return 2;
            }
            break;  // Stoppe le parcours après avoir trouvé une pièce
        }
    }

    // Parcours vers la droite
    for (int i = 1; i <= dist_droite; i++) {
        if ((y + i) >= 8) break;  // Vérifie que l'indice reste valide
        int piece = plt.getElt(x, y + i);
        if (piece != 0) {
            if ((10 < abs(piece)) && (abs(piece) < 19)) {
                return 0;
                break;
            } else if (piece == c * 21 || piece == c * 22 || piece == c * 31 || piece == c * 32) {
                return 2;
            } else if (piece == c * 41 && i == 1) {
                return 2;
            }
            break;
        }
    }

    // Parcours vers le haut
    for (int i = 1; i <= dist_haut; i++) {
        if ((x + i) >= 8) break;  // Vérifie que l'indice reste valide
        int piece = plt.getElt(x + i, y);
        if (piece != 0) {
            if ((10 < abs(piece)) && (abs(piece) < 19)) {
                return 0;
                break;
            } else if (piece == c * 21 || piece == c * 22 || piece == c * 31 || piece == c * 32) {
                return 2;
            } else if (piece == c * 41 && i == 1) {
                return 2;
            }
            break;
        }
    }

    // Parcours vers le bas
    for (int i = 1; i <= dist_bas; i++) {
        if ((x - i) < 0) break;  // Vérifie que l'indice reste valide
        int piece = plt.getElt(x - i, y);
        if (piece != 0) {
            if ((10 < abs(piece)) && (abs(piece) < 19)) {
                return 0;
                break;
            } else if (piece == c * 21 || piece == c * 22 || piece == c * 31 || piece == c * 32) {
                return 2;
            } else if (piece == c * 41 && i == 1) {
                return 2;
            }
            break;
        }
    }

    return danger;
}


double distance(int x1, int y1, int x2, int y2) { //donne la distance entre deux coordonnée, sert a rien pour l'instant
    return pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
}


bool estOccupe(int x, int y, const occupation& plt){ //renvoie true si la case est occupée, False si elle est libre
    if(abs(plt.getElt(x,y))!=1)
        return true;
    else
        return false;
}