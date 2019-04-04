/*
** input.c for cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 10:11:06 2017 ALEXANIAN Antoine
** Last update Tue Jan 17 16:47:15 2017 ALEXANIAN Antoine
*/

#include "all.h"

char		*readline()
{
  unsigned int	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}

int		get_command(char *str, char **map, t_player *player)
{
  int		i;
  t_command	com[18] = {
    {"up", &move_up},
    {"w", &move_up},
    {"left", &move_left},
    {"a", &move_left},
    {"down", &move_down},
    {"s", &move_down},
    {"right", &move_right},
    {"d", &move_right},
    {"next", &next_map},
    {"prev", &prev_map},
    {" ", &get_key},
    {"getkey", &get_key},
    {"c", &crouch},
    {"crouch", &crouch},
    {"e", &opendoor},
    {"hold the door", &opendoor},
    {"q", &quit},
    {"quit", &quit}
  };

  i = 0;
  while (i < 18)
    {
      if (!my_strcmp(str, com[i].command))
	return (com[i].function(map, player));
      i++;
    }
  //unknown_command(player);
  return (0);
}
