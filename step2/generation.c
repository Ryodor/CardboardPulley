/*
** generation.c for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:43:52 2017 ALEXANIAN Antoine
** Last update Tue Jan 17 19:03:44 2017 ALEXANIAN Antoine
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

void	free_all(t_room *baseRooms, t_room *rooms, char **mapsName)
{
  int	i;

  rooms = baseRooms;
  i = 0;
  while (i < MAPNUMBER)
    {
      rooms = free_room(rooms, get_mapY(mapsName[i]));
      i++;
    }
  i--;
  while (i >= 0)
    {
      free(mapsName[i]);
      i--;
    }
}

t_room		*free_room(t_room *room, unsigned int y)
{
  void		*tmp;
  unsigned int	i;

  i = 0;
  while (i < y)
    {
      free(room->map[i]);
      i++;
    }
  free(room->map);
  tmp = room->next;
  free(room);
  return ((t_room*)tmp);
}
