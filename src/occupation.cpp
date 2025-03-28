#include "occupation.h"
#include"NicoFonction.h"
#include <iostream>
#include <ostream>

#include "fonctions.h"

void occupation::maj(plateau& plt_ref, int c_) //remettre const
    {
      for(int i = 0; i<8;i++){
        for (int j = 0; j<8;j++){
            plt[i][j] = underControl(plt_ref, i, j, c_) ; // on modifie le plateau actuel avec plt ref
          }
         }
    }

void occupation::afficher() {
    plateau::afficher();
    std::cout<<"plateau occupation des "<<c<<std::endl;
    std::cout<<"---------------------"<<std::endl;
}

occupation::occupation(int c_) : plateau() {
    c=c_;
}
