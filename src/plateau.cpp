#include<iostream.h>
#include"plateau.h"



plateau::plateau() //constructeur : tableau vierge
{
    int** plt=new int*;
    for(int i=0;i<8;i++)
    {
          plt[i]=new int;
    }
}

plateau::affichage(plateau& plt){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      std::cout<<"|"<<plt[i][j]<<;
    }
    std::cout<<"|"<<std::endl;
  }
}

plateau::~plateau() //destructeur
{
  for(int i=0;i<8;i++)
  {
    free(plt[i]);
  }
  free(plt);
}