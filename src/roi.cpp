#include "roi.h"
#include <iostream>

roi::roi(int abs, int ord,int c,plateau& plt_){
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

    if(reglesDeplacement(xf, yf, pltt)}){

    }
        std::cout<<"Ce mouvement est illegal aux echecs, essayez autre chose" << std::endl;
        return 0;
    }
    else {
        x=xf;
        y=yf;
        return 0;
    }
}

bool roi::reglesDeplacement(int xf, int yf, plateau& plt_) {
    if((0<=xf && xf<=7) && (0<=yf && yf<=7)){
        if (plt_.estOccupe(xf, yf)) {
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


bool roi::estEnEchec(plateau& plt,int x_, int y_) {
  int couleur;
  for (int i = 0; i < 8; i++) { //parcourt de tout le plateau
    for (int j = 0; j < 8; j++) { //idem
      if((plt.estOccupe(i,j,couleur)) && (c != couleur) && (this->seDeplacer(x,y,c))) {
          return true;
       }
  return false;
       }

   }
 }
