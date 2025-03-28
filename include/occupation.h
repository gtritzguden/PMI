#pragma once
#include"plateau.h"

class occupation : public plateau{
  private:
    int c; //precise la couleur pour laquelle le plateau d'occupation est crée
  public:
    void maj(const plateau& plt_ref, int c_);
    void afficher();
    occupation();
};

