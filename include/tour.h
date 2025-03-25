#pragma once
#include <iostream>


class tour : public pieces {
private:
    int couleur; /*0 pour blanc et 1 pour blanc*/
    int x; /* [a:h] */
    int y; /* [1:8] */

public:
    tour(int x, int y);
    void position();
    void seDeplacer(int xf, int yf, int c); /* Vérifier que le déplacement de la pièce ne met pas en échec le roi */
    ~tour();

};
