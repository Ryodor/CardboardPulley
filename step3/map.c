/*
** map.c for  in /Users/selatn_r/Project/cardboard_pulley/alexan_b/step1
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Mon Jan 16 10:05:12 2017 SELATNI Ryad
** Last update Wed Jan 18 18:36:19 2017 ALEXANIAN Antoine
*/

#include "all.h"

void		show_room(t_room *room, t_player *player, t_yellow *yellow, char *mapName, t_ennemy *baseEnnemies)
{
  unsigned int	x;
  unsigned int	y;

  my_putstr(mapName);
  my_putstr("\n\n");
  y = 0;
  while (y < get_mapY(mapName))
    {
      x = 0;
      while (x < get_mapX(mapName))
	{
	  if (player->x == x && player->y == y)
	    if (player->crouch)
	      my_putchar('_');
	    else
	      my_putchar('i');
	  else if (there_is_ennemy(baseEnnemies, x, y, mapName))
	    my_putchar(get_ennemy_char(baseEnnemies, x, y, mapName));
	  else if (yellow->x == x && yellow->y == y && player->hasYellow)
	    my_putchar('!');
	  else if (room->map[y][x] == 'W' || room->map[y][x] == 'w' ||
		   room->map[y][x] == 'A' || room->map[y][x] == 'a' ||
		   room->map[y][x] == 'S' || room->map[y][x] == 's' ||
		   room->map[y][x] == 'D' || room->map[y][x] == 'd' ||
		   room->map[y][x] == 'O' || room->map[y][x] == '!')
	    my_putchar(' ');
	  else if (room->map[y][x] == 'y')
	    my_putchar('x');
	  else
	    my_putchar(room->map[y][x]);
	  x++;
	}
      y++;
    }
}

void	read_map(char **map, char *name, t_ennemy *baseEnnemies)
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
      if (c == '<' || c == '>')
	{
	  add_ennemy(baseEnnemies, x, y, name);
	  map[y][x] = ' ';
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
