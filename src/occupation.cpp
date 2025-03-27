#include "occupation.h"
#include "fonctions.h"

void occupation::maj(const plateau& plt_ref, int c_)
    {
      for(int i = 0; i<8;i++){
        for (int j = 0; j<8;j++){
          plt[i][j] = underControl(plt_ref, i, j, c_); // on modifie le plateau actuel avec plt ref
          }
         }
    }