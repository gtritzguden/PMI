#include"occupation.h"
#include"fonctions.h"

void occupation::maj(const plateau& plt_ref) { //il faut modifier l'usage de c car mtn deux plateau
  int c;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      c=sign(plt_ref[i][j]); //on recupere la couleur de la piece

      if(plt_ref[i][j]!=0)) { //toute case nul correspond a une case sans piece
        plt[i][j]=1*c; // 1 signifie la presence d'une piece blanche
      }
      else if(plt_ref[i][j]==0) {

      }
    }
  }
}
