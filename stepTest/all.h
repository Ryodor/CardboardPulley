/*
** all.h for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:10 2017 ALEXANIAN Antoine
** Last update Mon Jan 16 19:00:37 2017 ALEXANIAN Antoine
*/

#ifndef __ALL_H__
#define __ALL_H__
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libmy.h"
#include "ennemy.h"

#define MAPNUMBER 5

typedef struct  s_room
{
  char          **map;
  struct room   *next;
}               t_room;

typedef struct	s_player
{
  unsigned int	x;
  unsigned int	y;
  unsigned int	crouch;
  unsigned int	map;
  unsigned int	quit;
  unsigned int	hasKey;
  int		changeMap;
}		t_player;

typedef struct  s_command
{
  char          *command;
  int           (*function)();
}               t_command;

void		read_map(char **map, char *name);
unsigned int	get_mapX(char *name);
unsigned int	get_mapY(char *name);
t_room		*init_room(unsigned int x, unsigned int y);
t_room		*free_room(t_room *room, unsigned int y);
t_room          *access_room(t_room *base, unsigned int nb);
void		setSpawn(t_player *player, char **map, char *mapName);
void    	free_all(t_room *baseRooms, t_room *rooms, char **mapsName);
void		show_room(t_room *room, t_player *player, unsigned int x, unsigned int y);
char		get_tile(char **map, unsigned int x, unsigned int y);
int     	move_up(char **map, t_player *player);
int     	move_down(char **map, t_player *player);
int     	move_left(char **map, t_player *player);
int     	move_right(char **map, t_player *player);
int		next_map(char **map, t_player *player);
int		prev_map(char **map, t_player *player);
int		get_key(char **map, t_player *player);
int		crouch(char **map, t_player *player);
int		opendoor(char **map, t_player *player);
int		quit(char **map, t_player *player);
int             get_command(char *str, char **map, t_player *player);
char		*readline();

#endif /* __ALL_H__ */
