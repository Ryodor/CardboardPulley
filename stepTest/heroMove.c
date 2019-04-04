/*
** heroMove.c for  in /Users/selatn_r/Project/cardboard_pulley/alexan_b/step1
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Mon Jan 16 13:10:27 2017 SELATNI Ryad
** Last update Mon Jan 16 15:16:06 2017 SELATNI Ryad
*/

#include "all.h"

/*c'est le fichier qui va contenir les fonctions lie au mouvement du personnage 
(les securite seront surment dans un autre fichier)
ne fait pas attention, a tout ce qu'il y a, je vais fairepas mal de test*/

t_room		heroMove(t_room map)
{
  char		*i;
  
  i = read(0, i, 1);
  if (strlen(i) != 1)
    {
      
    }
  my_putchar(i);
}

void ma_fonction (void)
{
  printf("Hello world!\n");
}

void * pointeurGenerique = ma_fonction ;

int		main(int ac, char **av)
{
  t_room	map;
  ma_fonction();
  //heroMove(map);
  return (0);
}
