/*
** action.c for cardboard in /home/axenntio/Cardboard/alexan_b/step2
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 13:28:18 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 12:38:17 2017 ALEXANIAN Antoine
*/

#include "all.h"

int	get_key(char **map, t_player *player)
{
  if (get_tile(map, player->x, player->y) == 'K')
    {
      map[player->y][player->x] = ' ';
      player->hasKey++;
      return (1);
    }
  return (0);
}

int	crouch(char **map, t_player *player)
{
  if (get_tile(map, player->x, player->y) != 'H')
    {
      if (player->crouch)
	player->crouch = 0;
      else
	player->crouch = 1;
      return (1);
    }
  return (0);
}

int	opendoor(char **map, t_player *player)
{
  if (player->hasKey)
    {
      if (get_tile(map, player->x + 1, player->y) == 'x')
	{
	  map[player->y][player->x + 1] = 'd';
	  player->hasKey--;
	}
      if (get_tile(map, player->x - 1, player->y) == 'x')
	{
	  map[player->y][player->x - 1] = 'a';
	  player->hasKey--;
	}
      if (get_tile(map, player->x, player->y + 1) == 'x')
	{
	  map[player->y + 1][player->x] = 's';
	  player->hasKey--;
	}
      if (get_tile(map, player->x, player->y - 1) == 'x')
	{
	  map[player->y - 1][player->x] = 'w';
	  player->hasKey--;
	}
      if (get_tile(map, player->x + 1, player->y) == 'y')
	{
	  map[player->y][player->x + 1] = ' ';
	  player->hasKey--;
	}
      if (get_tile(map, player->x - 1, player->y) == 'y')
	{
	  map[player->y][player->x - 1] = ' ';
	  player->hasKey--;
	}
      if (get_tile(map, player->x, player->y + 1) == 'y')
	{
	  map[player->y + 1][player->x] = ' ';
	  player->hasKey--;
	}
      if (get_tile(map, player->x, player->y - 1) == 'y')
	{
	  map[player->y - 1][player->x] = ' ';
	  player->hasKey--;
	}
      return (1);
    }
  return (0);
}
