/*
** ennemy.c for cardboard in /home/axenntio/Cardboard/alexan_b/step3
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Wed Jan 18 15:58:20 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 14:51:43 2017 ALEXANIAN Antoine
*/

#include "all.h"

t_ennemy		*get_last_ennemy_addr(t_ennemy *baseEnnemies)
{
  t_ennemy	*ennemy;

  ennemy = baseEnnemies;
  while (ennemy->next != NULL)
    ennemy = ennemy->next;
  return (ennemy);
}

char		*get_ennemy_path(char *name, char *path)
{
  char		*tmp;
  unsigned int	size;
  unsigned int	fh;
  
  tmp = my_strdup(name);
  tmp = my_strcat(tmp, ".move");
  fh = open(tmp, O_RDONLY);
  if ((size = read(fh, path, 200)) > 1)
    path[size - 1] = '\0';
  else
    path[0] = '\0';
  close(fh);
  free(tmp);
  return (path);
}

void		add_ennemy(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map)
{
  t_ennemy	*last;
  t_ennemy	*ennemy;

  last = get_last_ennemy_addr(baseEnnemies);
  ennemy = malloc(sizeof(t_ennemy));
  ennemy->x = x;
  ennemy->y = y;
  ennemy->turn = 0;
  ennemy->indexPath = 0;
  //ennemy->path = get_ennemy_path(map, ennemy->path);
  ennemy->path = my_strdup("wwwwwwddwwwwwwaa");
  //my_putstr(ennemy->path);
  ennemy->map = my_strdup(map);
  ennemy->direction = '<';
  last->next = ennemy;
}

unsigned int	there_is_ennemy(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map)
{
  t_ennemy      *ennemy;

  ennemy = baseEnnemies->next;
  while (ennemy != NULL)
    {
      if (ennemy->x == x && ennemy->y == y && !my_strcmp(ennemy->map, map))
	return (1);
      ennemy = ennemy->next;
    }
  return (0);
}

char		get_ennemy_char(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map)
{
  t_ennemy      *ennemy;

  ennemy = baseEnnemies->next;
  while (ennemy != NULL)
    {
      if (ennemy->x == x && ennemy->y == y && !my_strcmp(ennemy->map, map))
	return (ennemy->direction);
      ennemy = ennemy->next;
    }
  return (' ');
}
