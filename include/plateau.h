#pragma once
#include"occupation.h"

class plateau {
    protected:
        int** plt;
    public:
        plateau(); //constructeur
        //void prendrePiece(int x, int y, int c);
        void ajouterPiece(int x, int y, int c); //c designe la couleur et le type de piece
        void supprimerPiece(int x, int y); // pas bespin de couleur, on met juste 0;
        void afficher() const;
        int getElt(int x, int y) const;
        ~plateau();


};