#pragma once
#include"plateau.h"

class occupation : public plateau {
  public:
    int c; //precise la couleur pour laquelle le plateau d'occupation est crée
  private:
    void maj(const plateau& plt_ref, int x_, int y_, int c_);
};
