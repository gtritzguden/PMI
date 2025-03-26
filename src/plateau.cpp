#include<iostream>
#include"plateau.h"


plateau::plateau(){ //constructeur : tableau vierge
    plt = new int*[8];
    for(int i=0;i<8;i++)
    {
      plt[i]=new int[8];
      for(int j=0;j<8;j++) {
        plt[i][j]=0;
      }
    }
}

void plateau::afficher(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      std::cout<<"|"<<plt[i][j];
    }
    std::cout<<"|"<<std::endl;
  }
}

bool plateau::estOccupe(int x, int y){
  if(plt[x][y]==1)
    return true;
  else
    return false;
}

void plateau::ajouterPiece(int x, int y,int c){
	plt[x][y]=c; //idée : au lieu de faire 2 tableaux d'occupation, on met 1 pour noir, -1 pour blanc
}

void plateau::supprimerPiece(int x, int y){
  plt[x][y]=0;
}

plateau::~plateau(){ //destructeur
  for(int i=0;i<8;i++)
  {
    delete[] plt[i];
  }
  delete[] plt;
}

