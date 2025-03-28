#include<iostream>
#include"plateau.h"
#include"occupation.h"



plateau::plateau(){ //constructeur : plateau vierge
    plt = new int*[8];
    for(int i=0;i<8;i++){
      plt[i]=new int[8];
      for(int j=0;j<8;j++) {
        plt[i][j]=0;
      }
    }
}

void plateau::afficher() const{
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      std::cout<<"|"<<plt[i][j];
    }
    std::cout<<"|"<<std::endl;
  }
  std::cout<<"---------------------"<<std::endl;
}


void plateau::ajouterPiece(int x, int y,int c){//c est la couleur mais aussi le type de la piece
  plt[x][y]=c;
}

void plateau::supprimerPiece(int x, int y){
  plt[x][y]=0;
}

int plateau::getElt(int x, int y) const {
  return plt[x][y];
}

plateau::~plateau(){ //destructeur
  for(int i=0;i<8;i++){
    delete[] plt[i];
  }
  delete[] plt;
}

