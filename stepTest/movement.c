/*
** movement.c for cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 09:27:57 2017 ALEXANIAN Antoine
** Last update Mon Jan 16 19:36:57 2017 ALEXANIAN Antoine
*/

#include "all.h"

char	get_tile(char **map, unsigned int x, unsigned int y)
{
  return (map[y][x]);
}

int	move_up(char **map, t_player *player)
{
  char	c;
  
  if (get_tile(map, player->x, player->y) == 'w' && player->map < (MAPNUMBER - 1))
    {
      player->map++;
      player->changeMap = 1;
    }
  else if (get_tile(map, player->x, player->y) == 'W' && player->map > 0)
    {
      player->map--;
      player->changeMap = -1;
    }
  else
    {
      c = get_tile(map, player->x, player->y - 1);
      if (c == ' ' || c == 'K' || c == 'O' || c == 'w' ||
	  c == 'W' || ( c == 'H' && player->crouch))
	{
	  player->y--;
	  return (1);
	}
    }
  return (0);
}

int	move_down(char **map, t_player *player)
{
  char	c;

  if (get_tile(map, player->x, player->y) == 's' && player->map < (MAPNUMBER - 1))
    {
      player->map++;
      player->changeMap = 1;
    }
  else if (get_tile(map, player->x, player->y) == 'S' && player->map > 0)
    {
      player->map--;
      player->changeMap = -1;
    }
  else
    {
      c = get_tile(map, player->x, player->y + 1);
      if (c == ' ' || c == 'K' || c == 'O' || c == 's' ||
	  c == 'S' || ( c == 'H' && player->crouch))
	{
	  player->y++;
	  return (1);
	}
    }
  return (0);
}

int	move_left(char **map, t_player *player)
{
  char	c;

  if (get_tile(map, player->x, player->y) == 'a' && player->map < (MAPNUMBER - 1))
    {
      player->map++;
      player->changeMap = 1;
    }
  else if (get_tile(map, player->x, player->y) == 'A' && player->map > 0)
    {
      player->map--;
      player->changeMap = -1;
    }
  else
    {
      c = get_tile(map, player->x - 1, player->y);
      if (c == ' ' || c == 'K' || c == 'O' || c == 'a' ||
	  c == 'A' || ( c == 'H' && player->crouch))
	{
	  player->x--;
	  return (1);
	}
    }
  return (0);
}

int	move_right(char **map, t_player *player)
{
  char	c;

  if (get_tile(map, player->x, player->y) == 'd' && player->map < (MAPNUMBER - 1))
    {
      player->map++;
      player->changeMap = 1;
    }
  else if (get_tile(map, player->x, player->y) == 'D' && player->map > 0)
    {
      player->map--;
      player->changeMap = -1;
    }
  else
    {
      c = get_tile(map, player->x + 1, player->y);
      if (c == ' ' || c == 'K' || c == 'O' || c == 'd' ||
	  c == 'D' || ( c == 'H' && player->crouch))
	{
	  player->x++;
	  return (1);
	}
    }
  return (0);
}
