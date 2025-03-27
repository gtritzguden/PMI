#include "roi.h"
#include "fonctions.h"
#include <iostream>

roi::roi(int abs, int ord,int c_, plateau &plt){
    x=abs;
    y=ord;
    c=c_;
    plt.ajouterPiece(x,y,c); //c désigne le type ainsi que la couleur de la pièce
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece roi a été cree en "<<tab[x-1]<<y<<std::endl;
}


void roi::position(int& x_, int& y_) {
    x_=x;
    y_=y;
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le roi se trouve en "<< tab[x-1] << y <<std::endl;
}


int roi::seDeplacer(int xf, int yf, int c_,plateau& plt,occupation& plt_2) { //on ne peut pas compiler si couleur ne sert à rien

    if(reglesDeplacement(xf, yf, plt_2)){
        std::cout<<"Ce mouvement est illegal aux echecs, essayez autre chose" << std::endl;
        return 0;
    }

    else{
        plt.supprimerPiece(x,y);
        x=xf;
        y=yf;
        plt.ajouterPiece(x,y,c);
        char t[8] = {'a','b','c','d','e','f','g','h'};
        std::cout<<"Le roi se trouve en "<<t[xf-1]<<yf<<std::endl;
        return 0;
    }
}

bool roi::reglesDeplacement(int xf, int yf, occupation& occ_) {
    if((0<=xf && xf<=7) && (0<=yf && yf<=7)){
        if (estOccupe(xf, yf,occ_)) {
          //insérer les règles de prise
              return false; //à changer en même temps qaue les règles
        }
        else{
          if ((xf-x == 0) && (yf-y == 1)) //condition de déplacement vertical avant
            return true;
          return false; //si pas déplacement pas vertical avant : false
    }//fermeture de la condition de déplacement
  } //fermeture de la condition de limites
  return false; //false de non respect des limites du plateau de jeu
}


bool roi::estEnEchec(occupation& plt,int x_, int y_) {
  int couleur;
  for (int i = 0; i < 8; i++) { //parcourt de tout le plateau
    for (int j = 0; j < 8; j++) { //idem
      if((estOccupe(i,j,plt)) && (c != couleur) && (this->seDeplacer(x,y,c,plt))) {
          return true;
       } //Dans la fonction estOccupe il n'y a pas de couleur donc la condition est zarbi Guigui
  return false;
       }

   }
}
