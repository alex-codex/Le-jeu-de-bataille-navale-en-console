 #ifndef Les_types
 #define Les_types
 #include<stdio.h>
 #include <stdlib.h>
#include <unistd.h>
#include <conio.h>
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

