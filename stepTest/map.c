/*
** map.c for  in /Users/selatn_r/Project/cardboard_pulley/alexan_b/step1
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Mon Jan 16 10:05:12 2017 SELATNI Ryad
** Last update Mon Jan 16 19:24:06 2017 ALEXANIAN Antoine
*/

#include "all.h"

void		show_room(t_room *room, t_player *player, unsigned int x, unsigned int y)
{
  unsigned int	xm;
  unsigned int	ym;

  ym = 0;
  while (ym < y)  
    {
      xm = 0;
      while (xm < x)
	{
	  if (player->x == xm && player->y == ym)
	    if (player->crouch)
	      my_putchar('_');
	    else
	      my_putchar('i');
	  else
	    my_putchar(room->map[ym][xm]);
	  xm++;
	}
      ym++;
    }
}

void	read_map(char **map, char *name)
{
  int	fh;
  int	x;
  int	y;
  char	c;

  fh = open(name, O_RDONLY);
  x = 0;
  y = 0;
  while (read(fh, &c, 1) > 0)
    {
      map[y][x] = c;
      if (c == '\n')
	{
	  y++;
	  x = -1;
	}
      x++;
    }
  close(fh);
}

unsigned int	get_mapX(char *name)
{
  int		fh;
  unsigned int	x;
  unsigned int	bigest;
  char		c;

  fh = open(name, O_RDONLY);
  x = 0;
  while (read(fh, &c, 1) > 0)
    {
      if (c == '\n')
	  x = -1;
      x++;
      if (x > bigest)
	bigest = x;
    }
  close(fh);
  return (bigest + 1);
}

unsigned int	get_mapY(char *name)
{
  int		fh;
  unsigned int	y;
  char		c;

  fh = open(name, O_RDONLY);
  y = 0;
  while (read(fh, &c, 1) > 0)
    {
      if (c == '\n')
	{
	  y++;
	}
    }
  close(fh);
  return (y);
}

t_room		*access_room(t_room *base, unsigned int nb)
{
  t_room	*tmp;
  unsigned int	i;

  tmp = base;
  i = 0;
  while (i < nb)
    {
      tmp = (t_room*)tmp->next;
      i++;
    }
  return (tmp);
}

void	setSpawn(t_player *player, char **map, char *mapName)
{
  unsigned int	i;
  unsigned int	j;

  i = 0;
  while (i < get_mapX(mapName))
    {
      j = 0;
      while (j < get_mapY(mapName))
	{
	  if (((map[j][i] == 'W' || map[j][i] == 'A' || map[j][i] == 'S' ||
		map[j][i] == 'D') && player->changeMap == 1) ||
	      ((map[j][i] == 'w' || map[j][i] == 'a' || map[j][i] == 's' ||
		map[j][i] == 'd') && player->changeMap == -1) ||
	      (map[j][i] == 'O' && player->changeMap == 1))
	    {
	      player->x = i;
	      player->y = j;
	      player->changeMap = 0;
	    }
	  j++;
	}
      i++;
    }
}
