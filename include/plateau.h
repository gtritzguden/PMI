#pragma once
//#include "pieces.h" //permet l'accès aux pièces par plateau

class plateau{
    private:
        int** plt;
    public:
        plateau(); //constructeur
        //void prendrePiece(int x, int y, int c);
        //ajouterPiece(
        void afficher();
		bool estOccupe(int x, int y); //renvoie true si la case est occupée, False si elel est libre
        ~plateau();


};