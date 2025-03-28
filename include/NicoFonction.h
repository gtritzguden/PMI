#pragma once
#include "plateau.h"

bool estUneTourBlanche(int x, int y, plateau &plt);
bool estUneTourNoire(int x, int y, plateau &plt);
bool estUneDameBlanche(int x, int y, plateau &plt);
bool estUneDameNoire(int x, int y, plateau &plt);
bool underControl(int x, int y, int c, plateau &plt);