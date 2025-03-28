#include"plateau.h"
#include "pion.h"
#include "tour.h"
//#include "roi.h"

#include <fonctions.h>
#include <stdio.h>

int main(){
//    plateau P1;
//	P1.afficher();
//    pion p1(0,0,-1,P1);
//	P1.afficher();
//// Test pion : fonctionne
//   	P1.afficher();
//    p1.seDeplacer(0,-1,1,P1); //déplacement ivalide
//    p1.seDeplacer(0,1,1,P1); //déplacement valide
//    p1.seDeplacer(1,1,1,P1); //déplacement invalide
//    p1.seDeplacer(0,0,1,P1); //Déplacement invalide
//    P1.afficher();

    //test test


    //test vraiment vite fait prcq il est tard

    plateau P_jeu;
    P_jeu.afficher();
    pion P1(4,4,11,P_jeu);
    //tour T1(2,2,-21,P_jeu);
    P_jeu.afficher();

    std::cout<<"elemmm ="<<P_jeu.getElt(4,4)<<std::endl;

    occupation occBlanc(1);
    occBlanc.afficher();
    occBlanc.maj(P_jeu,1);
    occBlanc.afficher();

    //std::cout<<"undercontrolmmmm?"<<underControl(P_jeu,2,4,1)<<std::endl;
    std::cout<<"???"<<std::endl;
    return 0;
}