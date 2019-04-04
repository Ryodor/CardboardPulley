/*
** movement.c for cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 09:27:57 2017 ALEXANIAN Antoine
** Last update Mon Jan 16 18:24:07 2017 ALEXANIAN Antoine
*/

#include "all.h"

char	get_tile(char **map, unsigned int x, unsigned int y)
{
  return (map[y][x]);
}

int	move_up(char **map, t_player *player)
{
  if (player->y == 0 || get_tile(map, player->x, player->y - 1) == ' ')
    {
      player->y--;
      return (1);
    }
  else
    return (0);
}

int	move_down(char **map, t_player *player)
{
  if (player->y == (get_mapY("map/cargo_dock.map") - 1) || get_tile(map, player->x, player->y + 1) == ' ')
    {
      player->y++;
      return (1);
    }
  else
    return (0);
}

int	move_left(char **map, t_player *player)
{
  if (player->x == 0 || get_tile(map, player->x - 1, player->y) == ' ')
    {
      player->x--;
      return (1);
    }
  else
    return (0);
}

int	move_right(char **map, t_player *player)
{
  if (player->x == (get_mapX("map/cargo_dock.map") - 1) || get_tile(map, player->x + 1, player->y) == ' ')
    {
      player->x++;
      return (1);
    }
  else
    return (0);
}
