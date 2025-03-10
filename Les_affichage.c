#include "Les_affichages.h"
#include<stdio.h>


void afficher_surface(char surface[][20][3])
{
  for (int k = 0; k < 3; k++)
  {
    printf("\t\t\t\t       Profondeur %d00 -> %d\n", k+1,k);
    printf("    0    1    2     3    4    5                                  0    1    2     3    4    5  \n");
    printf("--------------------------------                                 ------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
      printf("%d", i);

      for (int j = 0; j < 20; j++)
      {
        if (j < 7 || j > 13)
        {
          if (j < 19)
          {
            printf("|  %c ", surface[i][j][k]);
          }
          else
          {
            printf("|  %c |", surface[i][j][k]);
          }
        }
        else
        {
          printf("    ");
        }
      }
      printf("\n");
      printf("--------------------------------                                ------------------------------\n");
    }
    printf("\n");
  }
}

  void afficher_surface_masque(char surface[][20][3])
{
  for (int k = 0; k < 3; k++)
  {
    printf("\t\t\t\t       Profondeur %d00 -> %d\n", k+1,k);
    printf("    0    1    2     3    4    5                                  0    1    2     3    4    5  \n");
    printf("--------------------------------                                 ------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
      printf("%d", i);

      for (int j = 0; j < 20; j++)
      {
        if (j < 7 || j > 13)
        {
          if (surface[i][j][k] == 'T' || surface[i][j][k] == 'V' || surface[i][j][k] == 'C' || surface[i][j][k] == 'R')
          {
            if (j < 19)
            {
              printf("|  %c ", surface[i][j][k]);
            }
            else
            {
              printf("|  %c |", surface[i][j][k]);
            }
          }
          else
          {
            if (j < 19)
            {
              printf("|    ");
            }
            else
            {
              printf("|     |");
            }
          }
          
        }
        else
        {
          printf("    ");
        }
      }
      printf("\n");
      printf("--------------------------------                                ------------------------------\n");
    }
    printf("\n");
  }
}

  void afficher_surface_tempo(char surface[][20][3] , int debut_zone)
{
    for (int k = 0; k < 3; k++)
    {
      printf("\t\t\t\t       Profondeur %d00 -> %d\n", k+1,k);
        printf("    0    1    2    3    4    5  \n");
        printf("-------------------------------- \n");

        for (int i = 0; i < 5; i++)
        {
            printf("%d", i);

            for (int j = 0; j < 20; j++)
            {
                if (j < 5)
                {
                    printf("|  %c ", surface[i][j+debut_zone][k]);
                }
                if (j == 5)
                {
                    printf("|  %c |", surface[i][j+debut_zone][k]);
                }
                if (j >= 6)
                {
                    printf("    ");
                }
            }
            printf("\n");
            printf("--------------------------------- \n");
        }
        printf("\n");
    }
}


