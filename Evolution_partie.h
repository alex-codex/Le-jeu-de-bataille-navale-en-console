#ifndef Evolution_partie
#define Evolution_partie
#include "Les_types.h"


void Tir(Joueur *joueur, char surface[][20][3], int debut_zone, char point);
void couler(Joueur *joueur, char surface[][20][3], char point);
int Victoire(char surface[][20][3], int debut_zone, char point);


#endif