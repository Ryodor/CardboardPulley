/*
** player.c for cardboard in /home/axenntio/Cardboard/alexan_b/step3
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Tue Jan 17 12:21:42 2017 ALEXANIAN Antoine
** Last update Wed Jan 18 13:08:14 2017 ALEXANIAN Antoine
*/

#include "all.h"

void		setSpawn(t_player *player, char **map, char *mapName)
{
  unsigned int	i;
  unsigned int	j;

  player->hasYellow = 0;
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
	  if (map[j][i] == '!')
	    player->hasYellow = 1;
	  j++;
	}
      i++;
    }
}
