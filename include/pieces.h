#pragma once
#include "plateau.h"

class pieces{
  protected:
    int x;
    int y;
    int couleur;

  public :
    pieces(int x, int y, int couleur);
    virtual void position(int& x, int& y); //renvoie dans x et y la position actuelle de la pièce
    virtual int seDeplacer(int x_a,int y_a, int couleur, plateau& plt_); // x_a et y_a = positions d'arrivée

    //possibilité de mettre un booléen pour indiquer si le déplacement s'est bien effectué
    //pas besoin de redéfinir un destructeur (pas de tableaux)
  };