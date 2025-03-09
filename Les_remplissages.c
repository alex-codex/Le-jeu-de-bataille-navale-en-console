#include "Les_remplissage.h"

void remplissage(Joueur *joueur,int debut_zone, char tableau[][20][3], char pion)
{
    int x, y, z;
    char orientation;

    printf("Entrez les coordonnees du bateau\n");
    printf("bateau longueur 1\n");
    do
    {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        printf("z = ");
        scanf("%d", &z);
    } while(x < 0 || x >=5 || y < 0 || y >= 6 || z < 0 || z >= 3);

    tableau[x][y+debut_zone][z] = pion;
    joueur->bateaux[0].positions[0].x = x;
    joueur->bateaux[0].positions[0].y = y+debut_zone;
    joueur->bateaux[0].positions[0].z = z;
    joueur->bateaux[0].taille = 1;
    joueur->bateaux[0].touche = 0;

    printf("bateau longueur 2\n");
    do {
        printf("H pour horizontal, V pour vertical\n");
        scanf(" %c", &orientation);
    } while (orientation != 'H' && orientation != 'h' && orientation != 'V' && orientation != 'v');

    if (orientation == 'H' || orientation == 'h')
    {
        do
        {
            printf("x= ");
            scanf("%d", &x);
            printf("y= ");
            scanf("%d", &y);
            printf("z= ");
            scanf("%d", &z);
        } while(x < 0 || x >=5 || y < 0 || y + 1 >6 || z < 0 || z >= 3);

        tableau[x][y+debut_zone][z] = pion;
        tableau[x][y + 1+debut_zone][z] = pion;
        joueur->bateaux[1].positions[0].x = x;
        joueur->bateaux[1].positions[0].y = y+debut_zone;
        joueur->bateaux[1].positions[0].z = z;
        joueur->bateaux[1].positions[1].x = x;
        joueur->bateaux[1].positions[1].y = y + 1+debut_zone;
        joueur->bateaux[1].positions[1].z = z;
        joueur->bateaux[1].taille = 2;
        joueur->bateaux[1].touche = 0;
    }
    if (orientation == 'V' || orientation == 'v')
    {
        do
        {
            printf("x= ");
            scanf("%d", &x);
            printf("y= ");
            scanf("%d", &y);
            printf("z= ");
            scanf("%d", &z);
        } while(x < 0 || x + 1 >=5 || y < 0 || y > 6 || z < 0 || z >= 3);

        tableau[x][y+debut_zone][z] = pion;
        tableau[x + 1][y+debut_zone][z] = pion;

        joueur->bateaux[1].positions[0].x = x;
        joueur->bateaux[1].positions[0].y = y+debut_zone;
        joueur->bateaux[1].positions[0].z = z;
        joueur->bateaux[1].positions[1].x = x + 1;
        joueur->bateaux[1].positions[1].y = y+debut_zone;
        joueur->bateaux[1].positions[1].z = z;
        joueur->bateaux[1].taille = 2;
        joueur->bateaux[1].touche = 0;
    }

    printf("bateau longueur 3\n");
    do {
        printf("H pour horizontal, V pour vertical\n");
        scanf(" %c", &orientation);
    } while (orientation != 'H' && orientation != 'h' && orientation != 'V' && orientation != 'v');

    if (orientation == 'H' || orientation == 'h')
    {
        do
        {
            printf("x= ");
            scanf("%d", &x);
            printf("y= ");
            scanf("%d", &y);
            printf("z= ");
            scanf("%d", &z);
        } while(x < 0 || x >=5 || y < 0 || y + 2 > 6 || z < 0 || z >= 3);

        tableau[x][y+debut_zone][z] = pion;
        tableau[x][y + 1+debut_zone][z] = pion;
        tableau[x][y + 2+debut_zone][z] = pion;
        joueur->bateaux[2].positions[0].x = x;
        joueur->bateaux[2].positions[0].y = y+debut_zone;
        joueur->bateaux[2].positions[0].z = z;
        joueur->bateaux[2].positions[1].x = x;
        joueur->bateaux[2].positions[1].y = y + 1+debut_zone;
        joueur->bateaux[2].positions[1].z = z;
        joueur->bateaux[2].positions[2].x = x;
        joueur->bateaux[2].positions[2].y = y + 2+debut_zone;
        joueur->bateaux[2].positions[2].z = z;
        joueur->bateaux[2].taille = 3;
        joueur->bateaux[2].touche = 0;
    }
    if (orientation == 'V' || orientation == 'v')
    {
        do
        {
            printf("x= ");
            scanf("%d", &x);
            printf("y= ");
            scanf("%d", &y);
            printf("z= ");
            scanf("%d", &z);
        } while(x < 0 || x + 2 >=5 || y < 0 || y > 6 || z < 0 || z >= 3);

        tableau[x][y+debut_zone][z] = pion;
        tableau[x + 1][y+debut_zone][z] = pion;
        tableau[x + 2][y+debut_zone][z] = pion;
        joueur->bateaux[2].positions[0].x = x;
        joueur->bateaux[2].positions[0].y = y+debut_zone;
        joueur->bateaux[2].positions[0].z = z;
        joueur->bateaux[2].positions[1].x = x + 1;
        joueur->bateaux[2].positions[1].y = y+debut_zone;
        joueur->bateaux[2].positions[1].z = z;
        joueur->bateaux[2].positions[2].x = x + 2;
        joueur->bateaux[2].positions[2].y = y+debut_zone;
        joueur->bateaux[2].positions[2].z = z;
        joueur->bateaux[2].taille = 3;
        joueur->bateaux[2].touche = 0;
    }
}

