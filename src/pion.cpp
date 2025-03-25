#include "pion.h"
#include "pieces.h"
#include "plateau.h"
#include "roi.h" // servira quand on fera les conditions d'échec au roi

pion::pion(int abs, int ord, int c) : pieces(abs, ord, c){
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a été cree en "<<tab[x-1]<<y<<std::endl;
}

void pion::position(int& x_, int& y_) {
    x_=x;
    y_=y; // on récupère dans les références ce qu'on veut
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le pion se trouve en "<< tab[x-1] << y <<std::endl;

}

int pion::seDeplacer(int xf, int yf, int c, plateau& plt) {
   if(reglesDeplacement(xf, yf, plt)){   // ajouter la mise en échec du roi
     x=xf;
     y=yf;
     std::cout<<"la pièce a été déplacée en"<<x<<y<<std::endl;
   }
   else
     std::cout<<"Déplacement impossible"<<std::endl;
   return 0;
}

bool pion::reglesDeplacement(int xf, int yf, plateau& plt_) { //xf et yf les abscisses finales du pion
  if((0<=xf && xf<=7) && (0<=yf && yf<=7)){
    if (plt_.estOccupe(xf, yf)) {
      //insérer les règles de prise
      return false; //à changer en même temps qaue les règles
    }
    else{
      if ((xf-x == 0) && (yf-y == 1)) //condition de déplacement vertical avant
        return true;
      return false; //si pas déplacement pas vertical avant : false
    }
  }
  return false; //false de non respect des limites du plateau de jeu
}