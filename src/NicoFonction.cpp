//#include <iostream>
//#include "NicoFonction.h"
//#include "plateau.h"
//
//
//bool underControl(int x, int y, int c, int &plt) {
//    char tab[8] = {'a','b','c','d','e','f','g','h'};
//
//    bool estUnPionPrendNoir = (abs(plt.getElt(x+1,y+1)) -10 < 10);
//    bool estUnPionPrendBlanc = (abs(plt.getElt(x-1,y-1)) -10 < 10);
//
//
//    bool tourPresente = (abs(getElt(x,y))-20 < 10);
//
//
//    if(c>0) {
//        if(estUnPionPrendNoir) {
//            std::cout << "La case est controlee par un pion adverse" << std::endl;
//            return false;
//        }
//
//
//
//
//
//    }
//
//    else if(c<0) {
//        if(estUnPionPrendBlanc)
//            std::cout << "La case est controlee par un pion" << std::endl;
//            return false;
//        }
//    }
//
//    if(c>0) {
//        for(int i=0 ; i<x ; i++) {
//            if(getElt(i,y)-20 < 10) { //Vérification de s'il y a une tour adverse sur la ligne
//                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
//                for(int k=i ; k<x ; k++) {
//                    if(getElt(k,y) > 0) {
//                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
//                    }
//                    else {
//                        std::cout<<"La case est controlee par une tour"<<std::endl;
//                    }
//                }
//            }
//        }
//        for(int l=x+1 ; l=8 ; l++) {
//            if(getElt(l,y)-20 < 10) {
//                std::cout<< "une tour est sur la même ligne que la case "<<tab[x-1]<<y<<std::endl;
//                for(m=l ; m>x ; m--) {
//                    if(getElt(m,y) > 0) {
//                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
//                    }
//                    else {
//                        std::cout<<"La case est controlee par une tour"<<std::endl;
//                    }
//                }
//            }
//        }
//
//
//
//
//
//        for(int o=0 ; o<y ; o++) {
//            if(getElt(x,o)-20 < 10) { //Vérification de s'il y a une tour adverse sur la ligne
//                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
//                for(int p=o ; p<y ; p++) {
//                    if(getElt(x,p) > 0) {
//                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
//                    }
//                    else {
//                        std::cout<<"La case est controlee par une tour"<<std::endl;
//                    }
//                }
//            }
//        }
//        for(int q=y+1 ; q=8 ; q++) {
//            if(getElt(x,q)-20 < 10) {
//                std::cout<< "une tour est sur la même colonne que la case "<<tab[x-1]<<y<<std::endl;
//                for(r=q ; r>y ; r--) {
//                    if(getElt(x,r) > 0) {
//                        std::cout<< "Mais une piece protege la case "<<tab[x-1]<<y<<" de la tour"<<std::endl;
//                    }
//                    else {
//                        std::cout<<"La case est controlee par une tour"<<std::endl;
//                    }
//                }
//            }
//        }
//    }
//
//
//
//
//
//
//
//
//}
