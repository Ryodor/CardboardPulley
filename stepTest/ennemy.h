/*
** all.h for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
**
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>                                                                     
**
** Started on  Mon Jan 16 03:17:10 2017 SELATNI Ryad
** Last update Tue Jan 17 19:30:44 2017 ALEXANIAN Antoine
*/

/*Structure ennemy, elle contient son adresse, ainsi que la direction dans la qu'elle
il regarde (2 = en bas, 4 = a gauche, 8 = en haut, et 6 = a droite) */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_ennemy
{
  unsigned int		x;
  unsigned int		y;
  char			view;
  unsigned int		map;
  struct s_ennemy	*next;
}			t_ennemy;

//typedef t_ennemy (*ptrF)(t_room*, t_ennemy*);

//	ennemy.c
t_ennemy	*new_ennemy(t_ennemy *bad_boy, unsigned int x, unsigned int y, unsigned int map);
//t_ennemy	popEnnemy(t_room *map, t_ennemy *badBoy);
//void            ennemy(t_room *map);

//	ennemyMove.c

//	displayEnnemy.c
//void        displayEnnemy(t_room *map, t_ennemy *badBoy);
