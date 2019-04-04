/*
** all.h for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:10 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 14:50:11 2017 ALEXANIAN Antoine
*/

#ifndef __ALL_H__
#define __ALL_H__
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libmy.h"
#include "struct.h"

#define MAPNUMBER 5

void		read_map(char **map, char *name, t_ennemy *baseEnnemies);
unsigned int	get_mapX(char *name);
unsigned int	get_mapY(char *name);
t_room		*init_room(unsigned int x, unsigned int y);
t_room		*free_room(t_room *room, unsigned int y);
t_room		*access_room(t_room *base, unsigned int nb);
void		setSpawn(t_player *player, char **map, char *mapName);
void    	free_all(t_room *baseRooms, t_room *rooms, char **mapsName);
void		show_room(t_room *room, t_player *player, t_yellow *yellow, char *mapsName, t_ennemy *baseEnnemies);
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
int		get_command(char *str, char **map, t_player *player);
t_path		*get_last_path_addr(t_path *basePath);
void		add_path_position(t_path *basePath, unsigned int x, unsigned int y);
void		yellowPhysic(t_player *player, t_yellow *yellow);
t_ennemy	*get_last_ennemy_addr(t_ennemy *baseEnnemies);
void		add_ennemy(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map);
unsigned int    there_is_ennemy(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map);
char		get_ennemy_char(t_ennemy *baseEnnemies, unsigned int x, unsigned int y, char *map);
void		update_ennemies(t_ennemy *baseEnnemies, char *map);
void		ennemies_view(t_ennemy *baseEnnemies, char *mapName, char **map, t_player *player);
char		*readline();

#endif /* __ALL_H__ */
