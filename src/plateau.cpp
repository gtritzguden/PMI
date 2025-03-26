#include<iostream>
#include<stdio.h> //pour sprintf qui concatene
#include"plateau.h"

#include <string.h>


plateau::plateau(){ //constructeur : plateau vierge
    plt = new char**[8];
    for(int i=0;i<8;i++){
      plt[i]=new char*[8];
      for(int j=0;j<8;j++) {
        plt[i][j]=new char[2];
        sprintf(plt[i][j],"%c",' ');
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
  std::cout<<"---------------------"<<std::endl;
}

bool plateau::estOccupe(int x, int y){
  if(strcmp(plt[x][y],"P")==0)
    return true;
  else
    return false;
}

void plateau::ajouterPiece(int x, int y,int c,char t){
  if (c==1) {
    sprintf(plt[x][y],"%c",t);
  }
  else if (c==-1) {
    sprintf(plt[x][y],"-%c",t);
  }
}

void plateau::supprimerPiece(int x, int y){
  delete[] plt[x][y];
  plt[x][y]=new char[2];
}

plateau::~plateau(){ //destructeur
  for(int i=0;i<8;i++)
  {
    for (int j=0;j<8;j++) {
      delete[] plt[i][j];
    }
    delete[] plt[i];
  }
  delete[] plt;
}

