#include "Les_types.h"
#include "Les_affichages.h"
#include "Les_remplissage.h"
#include "Evolution_partie.h"

  void initialiser_surface(char surface[][20][3])
{
  int i, j, k;

  for (i = 0; i<5; i++)
  {
    for (j=0; j<20; j++)
    {
      for (k=0; k<3; k++)
      {
        surface[i][j][k] = ' ';
      }
    }
  }
}




int main()
{
    Joueur joueur1, joueur2;
    char surface1[5][20][3];
   // char(*surface1)[20][3]=(char(*)[20][3])malloc(sizeof(char[20][20][3]));
    initialiser_surface(surface1);
    afficher_surface_tempo(surface1,0);
    remplissage(&joueur1,0, surface1, 'A');
    system("cls");
    afficher_surface_tempo(surface1, 14);
    remplissage(&joueur2, 14, surface1, 'B');
    afficher_surface(surface1);
    
                                             // gestion de la partie de jeu
    int victoire_joueur1 = 0;
    int victoire_joueur2 = 0;

    while (victoire_joueur1 == 0 && victoire_joueur2 == 0)
    {
        afficher_surface_masque(surface1);
        printf("\n Joueur 1 doit jouer\n");
        Tir(&joueur2, surface1, 14, 'B');
        couler(&joueur2, surface1, 'B');
        afficher_surface_masque(surface1);
        printf("Taper une touche pour continuer...\n");
        getch();
        system("cls");
        printf("\n\n");

        victoire_joueur1 = Victoire(surface1, 14, 'B');
        if (victoire_joueur1 == 1) {
            break;
        }
        afficher_surface_masque(surface1);
        printf("Joueur 2 doit jouer\n");
        Tir(&joueur1, surface1, 0, 'A');
        couler(&joueur1, surface1, 'A');
        afficher_surface_masque(surface1);
        printf("\n\n");
        printf("Taper une touche pour continuer...\n");
        getch();
        system("cls");

        victoire_joueur2 = Victoire(surface1, 0, 'A');
        if (victoire_joueur2 == 1) {
            break;
        }
    } 

    if (victoire_joueur1 == 1)
    {
        printf("Joueur 1 a gagne !\n");
        printf("recapitulatif \n\n");
        afficher_surface(surface1);
    }
    else if (victoire_joueur2 == 1)
    {
        printf("Joueur 2 a gagne !\n");
        printf("recapitulatif \n\n");
        afficher_surface(surface1);
    }

    return 0;
}