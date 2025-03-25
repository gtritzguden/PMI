//
// Created by guillaume on 25/03/25.
//
#include "pieces.h"


pieces::pieces(int x_,int y_,int c_) {
  x = x_;
  y = y_;
  couleur = c_;
}

int pieces::seDeplacer(int xf, int yf, int c) {
  return 0;
}

void pieces::position(int& x_, int& y_) {
  x_=x;
  y_=y;
}