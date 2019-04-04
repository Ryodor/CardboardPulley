/*
** generation.c for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:43:52 2017 ALEXANIAN Antoine
** Last update Mon Jan 16 10:14:17 2017 ALEXANIAN Antoine
*/

#include "all.h"

char		**init_map(unsigned int x, unsigned int y);

t_room		*init_room(unsigned int x, unsigned int y)
{
  t_room	*tmp;

  tmp = malloc(sizeof(t_room));
  tmp->map = init_map(x, y);
  tmp->next = NULL;
  return (tmp);
}

char		**init_map(unsigned int x, unsigned int y)
{
  char		**tmp;
  unsigned int	i;

  tmp = malloc(sizeof(char*) * y);
  i = 0;
  while (i < y)
    {
      tmp[i] = malloc(sizeof(char) * x);
      i++;
    }
  return (tmp);
}

void		free_room(t_room *room, unsigned int y)
{
  unsigned int	i;

  i = 0;
  while (i < y)
    {
      free(room->map[i]);
      i++;
    }
  free(room->map);
  free(room);
}
