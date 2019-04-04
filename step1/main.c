/*
** main.c for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:24 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 16:31:04 2017 ALEXANIAN Antoine
*/

#include "all.h"

int	search_option(int argc, char **argv, char *option);

int		main(int argc, char **argv)
{
  t_room	*rooms;
  t_player	player;
  char		*command;
  int		quit;
  int		color;

  rooms = NULL;
  quit = 0;
  color = search_option(argc, argv, "-c");
  rooms = init_room(get_mapX("map/cargo_dock.map"), get_mapY("map/cargo_dock.map"));
  read_map(rooms->map, &player, "map/cargo_dock.map");
  while ((quit = player_out(&player, "map/cargo_dock.map")))
    {
      if (color)
	my_putstr("\033[H\033[J");
      show_room(rooms, player, get_mapX("map/cargo_dock.map"), get_mapY("map/cargo_dock.map"));
      command = readline();
      get_command(command, rooms->map, &player);
      free(command);
    }
  free_room(rooms, get_mapY("map/cargo_dock.map"));
  if (color)
    my_putstr("\033[H\033[J");
  my_putstr("To be continued...\n");
  return (0);
}

int	search_option(int argc, char **argv, char *option)
{
  int	i;

  i = 0;
  while (i < argc)
    {
      if (!my_strcmp(argv[i], option))
	return (1);
      i++;
    }
  return (0);
}


