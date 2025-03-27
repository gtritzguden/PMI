#include "pion.h"
#include "fonctions.h"

#include <iostream> // servira quand on fera les conditions d'échec au roi

pion::pion(int x_, int y_, int c_, plateau& plt_){
  	x = x_;
    y = y_;
    c = c_;
  	plt_.ajouterPiece(x_,y_,c_); //le 'P' est pour l'affichage d'un pion
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"La piece pion a ete cree en "<<tab[x-1]<<y<<std::endl;
}

void pion::position(int& x_, int& y_) {
    x_=x;
    y_=y; // on récupère dans les références ce qu'on veut
    char tab[8] = {'a','b','c','d','e','f','g','h'};
    std::cout<<"Le pion se trouve en "<< tab[x-1] << y <<std::endl;

}

bool pion::seDeplacer(int xf, int yf, int c, plateau& plt,occupation& occ_) {
   if(reglesDeplacement(xf, yf, occ_)){// ajouter la mise en échec du roi
     plt.supprimerPiece(x,y); //on supprime la pièce
     x=xf; //on bouge la pièce
     y=yf;
     plt.ajouterPiece(x,y,c); //on replace la pièce
     std::cout<<"la piece a ete deplacee en"<<x<<y<<std::endl;
     return true;
   }
   else{
     std::cout<<"Deplacement impossible"<<std::endl;
     return false;
    }
}

bool pion::reglesDeplacement(int xf, int yf, occupation& occ_) { //xf et yf les abscisses finales du pion
  if((0<=xf && xf<=7) && (0<=yf && yf<=7)){
    if (estOccupe(xf,yf,occ_)) {
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