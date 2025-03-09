


#ifndef Les_types
#define Les_types
#include"Les_types.h"
#include<stdio.h>
typedef struct 
{
  int x;
  int y;
  int z; 
} Position;

typedef struct 
{
  Position positions[3]; 
  int taille;
  int touche;
} Bateau;

typedef struct
{
 Bateau bateaux[3]; 
} Joueur;

#endif

