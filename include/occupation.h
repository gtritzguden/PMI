#pragma once
#include"plateau.h"

class occupation : public plateau{
  private:
    int c; //precise la couleur pour laquelle le plateau d'occupation est crée
  public:
    void maj(plateau& plt_ref, int c_); // remettre const plate....
    void afficher();
    occupation(int c_);
};

