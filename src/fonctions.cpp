#include"fonctions.h"


int sign(int e){
    if (e<0) {
        return -1;
    }
    return 1;
}

int underControl(const plateau& plt, int x, int y, int c) { //test diag, alentour, mm colonne et mm ligne, prend plateau de jeu
    // c fait reference a la couleur du plateau d'occupation
    // on remplie le plateau d'occupation blanc -> c=1
    for (int i=0;i<8;i++) { //parcours de la ligne x
        if (plt[x][i]==21||22) { //il y a une tour ?
            return
        }
    }

}