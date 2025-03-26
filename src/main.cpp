#include"plateau.h"
#include "pion.h"
//#include "tour.h"
//#include "roi.h"

#include <stdio.h>

int main(){
    plateau P1;
	P1.afficher();
    pion p1(0,0,-1,P1);
	P1.afficher();
// Test pion : fonctionne
   	P1.afficher();
    p1.seDeplacer(0,-1,1,P1); //déplacement ivalide
    p1.seDeplacer(0,1,1,P1); //déplacement valide
    p1.seDeplacer(1,1,1,P1); //déplacement invalide
    p1.seDeplacer(0,0,1,P1); //Déplacement invalide
    P1.afficher();
    return 0;
}