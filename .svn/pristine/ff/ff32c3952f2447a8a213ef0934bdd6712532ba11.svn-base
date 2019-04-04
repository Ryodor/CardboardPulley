/*
** all.h for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:10 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 12:43:57 2017 ALEXANIAN Antoine
*/

#ifndef __ALL_H__
#define __ALL_H__
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libmy.h"

typedef struct	s_room
{
  char		**map;
  struct s_room	*next;
}		t_room;

typedef struct	s_player
{
  unsigned int	x;
  unsigned int	y;  
}		t_player;

typedef struct	s_command
{
  char		*command;
  int		(*function)();
}		t_command;

void		read_map(char **map, t_player *player, char *name);
unsigned int	get_mapX(char *name);
unsigned int	get_mapY(char *name);
int		player_out(t_player *player, char *mapName);
t_room		*init_room(unsigned int x, unsigned int y);
void		free_room(t_room *room, unsigned int y);
void		show_room(t_room *room, t_player player, unsigned int x, unsigned int y);
int     	move_up(char **map, t_player *player);
int     	move_down(char **map, t_player *player);
int     	move_left(char **map, t_player *player);
int     	move_right(char **map, t_player *player);
int		get_command(char *str, char **map, t_player *player);
char		*readline();

#endif /* __ALL_H__ */
