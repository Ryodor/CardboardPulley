/*
** struct.h for cardboard in /home/axenntio/Cardboard/alexan_b/step3
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Jan 19 14:49:29 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 14:50:21 2017 ALEXANIAN Antoine
*/

#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct	s_game
{
  int		clear;
}		t_game;

typedef struct	s_room
{
  char		**map;
  struct s_room	*next;
}		t_room;

typedef struct	s_player
{
  unsigned int	x;
  unsigned int	y;
  unsigned int	crouch;
  unsigned int	map;
  unsigned int	quit;
  unsigned int	hasKey;
  int		changeMap;
  unsigned int	hasYellow;
}		t_player;

typedef struct		s_ennemy
{
  unsigned int		x;
  unsigned int		y;
  unsigned int		turn;
  char			direction;
  unsigned int		indexPath;
  char			*path;
  char			*map;
  struct s_ennemy	*next;
}			t_ennemy;

typedef struct	s_path
{
  unsigned int	x;
  unsigned int	y;
  struct s_path	*next;
}		t_path;

typedef struct	s_yellow
{
  unsigned int	x;
  unsigned int	y;
  unsigned int	turn;
  struct t_path	*path;
}		t_yellow;

typedef struct	s_command
{
  char		*command;
  int		(*function)();
}		t_command;

#endif /* __STRUCT_H__ */
