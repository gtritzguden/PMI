#include"occupation.h"
#include"fonctions.h"

void occupation::maj(const plateau& plt_ref) { //il faut modifier l'usage de c car mtn deux plateau
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(plt_ref[i][j]>0 && c==1) { //toute case positive correspondent a une case avec piece blanche
        plt[i][j]=1;
      }
      else if(plt_ref[i][j]<0 && c==0) {//toute case negative ....
        plt[i][j]=-1;
      }
      else if(plt_ref[i][j]==0) {



      }
    }
  }
}
