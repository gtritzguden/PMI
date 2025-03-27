#pragma once
#include"plateau.h"

int sign(int e); //sert a savoir si la case contient une piece noir ou blanche ou rien
int underControl(const plateau& plt, int x, int y,int c);
double distance(int x1, int y1, int x2, int y2);