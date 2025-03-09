# Le-jeu-de-bataille-navale-en-console
ce programme implémente le jeu de bataille navale en console. Deux joueurs A et B disposent chacun d'une  mer ( tableau 5 x 6 ) sur trois niveaux de profondeur.
Chaque joueur possede trois (03) sous marins de taille 1 case, 2 cases, 3 cases. 

  ## Principe d'évolution du jeu
              	Le joueur A tire sur la mer B et le joueur B tire sur la mer A. Les cases peuvent etre marquées des lettres suivantes:	
- 'R': veut dire "Rien en vue", cela veut dire que si l'utilisateur tire sur la case (X,Y) à la profondeur P, on teste les cases (X,Y-1), (X+1,Y), (X,Y+1), (X-1,Y) à la profondeur P ainsi que la case (X,Y) à la profondeur P-100 mètres  (si elle existe) et la case (X,Y) à la profondeur P+100 mètres (si elle existe). 
- 'V': veut dire "Vu", c'est-à-dire qu'il y avait un sous-marin sur l'une des cases précitées. On mettra donc des V partout. 
- 'T': veut dire "Touché", c'est-à-dire qu'il y avait un sous-marin sur la case que l'on vient de viser.
- 'C': veut dire "Coulé", c'est-à-dire que l'on vient d'une part de toucher le sous-marin mais qu'on vient en plus de le couler car toutes les cases qu'il représentait ont été au préalable touchées.

  


