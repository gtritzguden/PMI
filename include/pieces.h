#pragma once

class pieces {
  private :
    int x,y,couleur;

  public :
    pieces(int x, int y, int couleur);
    virtual void position(int& x, int& y); //renvoie dans x et y la position actuelle de la pièce
    virtual void seDeplacer(int x_a,int y_a, int couleur); // x_a et y_a = positions d'arrivée
    //possibilité de mettre un booléen pour indiquer si le déplacement s'est bien effectué
    ~pieces();
  };