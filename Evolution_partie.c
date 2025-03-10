   #include "Evolution_partie.h"




void Tir(Joueur *joueur, char surface[][20][3], int debut_zone, char point)
{
    int x, y, z;
    int compte_coup = 0;
    printf("Entrez les coordonnees de la cible\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("profondeur = ");
    scanf("%d", &z);
    if (surface[x][y + debut_zone + 1][z] == point) surface[x][y + debut_zone + 1][z] = 'V';
    if (surface[x][y + debut_zone - 1][z] == point) surface[x][y + debut_zone - 1][z] = 'V';
    if (surface[x + 1][y + debut_zone][z] == point) surface[x + 1][y + debut_zone][z] = 'V';
    if (surface[x - 1][y + debut_zone][z] == point) surface[x - 1][y + debut_zone][z] = 'V';
    if(z>0 && surface[x][y+debut_zone][z-1] == point) surface[x][y+debut_zone][z-1] = 'V';
    if(z<2 && surface[x][y+debut_zone][z+1] == point) surface[x][y+debut_zone][z+1] = 'V';

    if (surface[x][y + debut_zone + 1][z] == ' ') surface[x][y + debut_zone + 1][z] = 'R';
    if (surface[x][y + debut_zone - 1][z] == ' ') surface[x][y + debut_zone - 1][z] = 'R';
    if (surface[x + 1][y + debut_zone][z] == ' ') surface[x + 1][y + debut_zone][z] = 'R';
    if (surface[x - 1][y + debut_zone][z] == ' ') surface[x - 1][y + debut_zone][z] = 'R';
    if(z>0 && surface[x][y+debut_zone][z-1] == ' ') surface[x][y+debut_zone][z-1] = 'R';
    if(z<2 && surface[x][y+debut_zone][z+1] == ' ') surface[x][y+debut_zone][z+1] = 'R';


    if (surface[x][y + debut_zone][z] == point || surface[x][y + debut_zone][z] == 'V') 
    {
        surface[x][y + debut_zone][z] = 'T';
       

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < joueur->bateaux[i].taille; j++) {
                if (joueur->bateaux[i].positions[j].x == x && joueur->bateaux[i].positions[j].y == y + debut_zone && joueur->bateaux[i].positions[j].z == z) {
                    joueur->bateaux[i].touche++;
                    break;
                }
            }
        }

        compte_coup++;
    }
    else
    {
        surface[x][y + debut_zone][z] = 'R';
    }
                   
    if (compte_coup == 0)
    {
        printf("Oups tu n'as pas touche !!\n");
    }
    else
    {
        printf("Toucher !!!!\n");
    }
}

  void couler(Joueur *joueur, char surface[][20][3], char point)
{
    for (int i = 0; i < 3; i++) {
        if (joueur->bateaux[i].touche == joueur->bateaux[i].taille) {
            for (int j = 0; j < joueur->bateaux[i].taille; j++) {
                surface[joueur->bateaux[i].positions[j].x][joueur->bateaux[i].positions[j].y][joueur->bateaux[i].positions[j].z] = 'C';
            }
        }
    }
}

int Victoire(char surface[][20][3], int debut_zone, char point)
{
    int i, j, k;
    int compteur = 0;
    for (i = 0; i < 5 ; i++)
    {
        for (j = debut_zone; j <= 5+debut_zone ; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (surface[i][j][k] == point || surface[i][j][k] == 'V')
                {
                    compteur++;
                }
            }
        }
    }
    if (compteur == 0)
    {
        return 1; // victoire
    }else
    {
        return 0; // pas de victoire
    }
   
}