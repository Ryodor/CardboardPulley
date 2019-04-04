/*
** path.c for cardboard in /home/axenntio/Cardboard/alexan_b/step3
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Tue Jan 17 16:55:20 2017 ALEXANIAN Antoine
** Last update Wed Jan 18 16:02:07 2017 ALEXANIAN Antoine
*/

#include "all.h"

void	yellowPhysic(t_player *player, t_yellow *yellow)
{
  if  (player->x == yellow->x && player->y == yellow->y && player->hasYellow)
    player->quit = 2;
}

t_path		*get_last_path_addr(t_path *basePath)
{
  t_path	*path;

  path = basePath;
  while (path->next != NULL)
    path = path->next;
  return (path);
}

void		add_path_position(t_path *basePath, unsigned int x, unsigned int y)
{
  t_path	*last;
  t_path	*path;

  last = get_last_path_addr(basePath);
  path = malloc(sizeof(t_path));
  path->x = x;
  path->y = y;
  last->next = path;
}
