/*
** ennemyMove.c for cardboard in /home/axenntio/Cardboard/alexan_b/step3
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Jan 19 14:45:57 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 15:59:31 2017 ALEXANIAN Antoine
*/

#include "all.h"

void		ennemies_view(t_ennemy *baseEnnemies, char *mapName, char **map, t_player *player)
{
  t_ennemy      *ennemy;

  ennemy = baseEnnemies->next;
  while (ennemy != NULL)
    {
      if (!my_strcmp(ennemy->map, mapName))
	{
	  if (ennemy->direction == '<')
	    {
	      if (map[ennemy->y][ennemy->x + 1] == ' ')
		{
		  if ((ennemy->y == player->y && (ennemy->x + 1) == player->x) ||
		      (ennemy->y == player->y && (ennemy->x + 2) == player->x && map[ennemy->y][ennemy->x + 2] == ' ') ||
		      ((ennemy->y - 1) == player->y && (ennemy->x + 2) == player->x && map[ennemy->y - 1][ennemy->x + 2] == ' ' && map[ennemy->y - 1][ennemy->x + 1] == ' ') ||
		      ((ennemy->y + 1) == player->y && (ennemy->x + 2) == player->x && map[ennemy->y + 1][ennemy->x + 2] == ' ' && map[ennemy->y + 1][ennemy->x + 1] == ' '))
		    player->quit = 4;
		}
	      else if (map[ennemy->y][ennemy->x + 1] == 'H')
		{
		  if (((ennemy->y == player->y && (ennemy->x + 1) == player->x) ||
		       (ennemy->y == player->y && (ennemy->x + 2) == player->x) ||
		       ((ennemy->y - 1) == player->y && (ennemy->x + 2) == player->x) ||
		       ((ennemy->y + 1) == player->y && (ennemy->x + 2) == player->x)) &&
		      !player->crouch)
		    player->quit = 4;
		}
	    }
	  if (ennemy->direction == '>')
	    {
	      if (map[ennemy->y][ennemy->x - 1] == ' ')
		{
		  if ((ennemy->y == player->y && (ennemy->x - 1) == player->x) ||
		      (ennemy->y == player->y && (ennemy->x - 2) == player->x && map[ennemy->y][ennemy->x - 2] == ' ') ||
		      ((ennemy->y - 1) == player->y && (ennemy->x - 2) == player->x && map[ennemy->y - 1][ennemy->x - 2] == ' ' && map[ennemy->y - 1][ennemy->x - 1] == ' ') ||
		      ((ennemy->y + 1) == player->y && (ennemy->x - 2) == player->x && map[ennemy->y + 1][ennemy->x - 2] == ' ' && map[ennemy->y + 1][ennemy->x - 1] == ' '))
		    player->quit = 4;
		}
	      else if (map[ennemy->y][ennemy->x - 1] == 'H')
		{
		  if (((ennemy->y == player->y && (ennemy->x - 1) == player->x) ||
		       (ennemy->y == player->y && (ennemy->x - 2) == player->x) ||
		       ((ennemy->y - 1) == player->y && (ennemy->x - 2) == player->x) ||
		       ((ennemy->y + 1) == player->y && (ennemy->x - 2) == player->x)) &&
		      !player->crouch)
		    player->quit = 4;
		}
	    }
	  if (ennemy->direction == '^')
	    {
	      if (map[ennemy->y + 1][ennemy->x] == ' ')
		{
		  if (((ennemy->y + 1) == player->y && ennemy->x == player->x) ||
		      ((ennemy->y + 2) == player->y && ennemy->x == player->x && map[ennemy->y + 2][ennemy->x] == ' ') ||
		      ((ennemy->y + 2) == player->y && (ennemy->x + 1) == player->x && map[ennemy->y + 2][ennemy->x + 1] == ' ' && map[ennemy->y + 1][ennemy->x + 1] == ' ') ||
		      ((ennemy->y + 2) == player->y && (ennemy->x - 1) == player->x && map[ennemy->y + 2][ennemy->x - 1] == ' ' && map[ennemy->y + 1][ennemy->x - 1] == ' '))
		    player->quit = 4;
		}
	      else if (map[ennemy->y + 1][ennemy->x] == 'H')
		{
		  if ((((ennemy->y + 1) == player->y && ennemy->x == player->x) ||
		       ((ennemy->y + 2) == player->y && ennemy->x == player->x) ||
		       ((ennemy->y + 2) == player->y && (ennemy->x + 1) == player->x) ||
		       ((ennemy->y + 2) == player->y && (ennemy->x - 1) == player->x)) &&
		      !player->crouch)
		    player->quit = 4;
		}
	    }
	  if (ennemy->direction == 'V')
	    {
	      if (map[ennemy->y - 1][ennemy->x] == ' ')
		{
		  if (((ennemy->y - 1) == player->y && ennemy->x == player->x) ||
		      ((ennemy->y - 2) == player->y && ennemy->x == player->x && map[ennemy->y - 2][ennemy->x] == ' ') ||
		      ((ennemy->y - 2) == player->y && (ennemy->x + 1) == player->x && map[ennemy->y - 2][ennemy->x + 1] == ' ' && map[ennemy->y - 1][ennemy->x + 1] == ' ') ||
		      ((ennemy->y - 2) == player->y && (ennemy->x - 1) == player->x && map[ennemy->y - 2][ennemy->x - 1] == ' ' && map[ennemy->y - 1][ennemy->x - 1] == ' '))
		    player->quit = 4;
		}
	      else if (map[ennemy->y - 1][ennemy->x] == 'H')
		{
		  if ((((ennemy->y - 1) == player->y && ennemy->x == player->x) ||
		       ((ennemy->y - 2) == player->y && ennemy->x == player->x) ||
		       ((ennemy->y - 2) == player->y && (ennemy->x + 1) == player->x) ||
		       ((ennemy->y - 2) == player->y && (ennemy->x - 1) == player->x)) &&
		      !player->crouch)
		    player->quit = 4;
		}
	    }
	}
      ennemy = ennemy->next;
    }
}

void		update_ennemies(t_ennemy *baseEnnemies, char *map)
{
  t_ennemy      *ennemy;
  char		c;

  ennemy = baseEnnemies->next;
  while (ennemy != NULL)
    {
      if (!my_strcmp(ennemy->map, map))
	{
	  if (ennemy->turn)
	    {
	      if (ennemy->path[ennemy->indexPath] == '\0')
		ennemy->indexPath = 0;
	      c = ennemy->path[ennemy->indexPath];
	      if (c == 'w')
		{
		  if (ennemy->direction == '<')
		    ennemy->x++;
		  else if (ennemy->direction == '>')
		    ennemy->x--;
		  else if (ennemy->direction == '^')
		    ennemy->y++;
		  else if (ennemy->direction == 'v')
		    ennemy->y--;
		}
	      if (c == 'a')
		{
		  if (ennemy->direction == '<')
		    ennemy->direction = 'v';
		  else if (ennemy->direction == '>')
		    ennemy->direction = '^';
		  else if (ennemy->direction == '^')
		    ennemy->direction = '<';
		  else if (ennemy->direction == 'v')
		    ennemy->direction = '>';
		}
	      if (c == 'd')
		{
		  if (ennemy->direction == '<')
		    ennemy->direction = '^';
		  else if (ennemy->direction == '>')
		    ennemy->direction = 'v';
		  else if (ennemy->direction == '^')
		    ennemy->direction = '>';
		  else if (ennemy->direction == 'v')
		    ennemy->direction = '<';
		}
	      ennemy->indexPath++;
	      ennemy->turn = 0;
	    }
	  else
	    ennemy->turn++;
	}
      ennemy = ennemy->next;
    }
}
