/*
** commands.c for cardboard in /home/axenntio/Cardboard/alexan_b/step2
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 12:58:52 2017 ALEXANIAN Antoine
** Last update Tue Jan 17 12:18:48 2017 ALEXANIAN Antoine
*/

#include "all.h"

int	next_map(char **map, t_player *player)
{
  if (get_tile(map, player->x, player->y) != 'X' && player->map < (MAPNUMBER - 1))
    {
      player->map++;
      player->changeMap = 1;
      return (1);
    }
  return (0);
}

int	prev_map(char **map, t_player *player)
{
  if (get_tile(map, player->x, player->y) != 'X' && player->map > 0)
    {
      player->map--;
      player->changeMap = 1;
      return (1);
    }
  return (0);
}

int     quit(char **map, t_player *player)
{
  if (get_tile(map, player->x, player->y) != 'X')
    {
      player->quit = 1;
      return (1);
    }
  return (0);
}
