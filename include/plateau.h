#pragma once

class plateau {
    private:
        char*** plt;
    public:
        plateau(); //constructeur
        //void prendrePiece(int x, int y, int c);
        void ajouterPiece(int x, int y, int c, char t); //remplit le tableau d'occupation avec pou reconnaitre la pièce
        void supprimerPiece(int x, int y); // pas bespin de couleur, on met juste 0;
        void afficher();
		bool estOccupe(int x, int y); //renvoie true si la case est occupée, False si elel est libre
        ~plateau();


};