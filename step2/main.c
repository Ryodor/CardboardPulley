/*
** main.c for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:24 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 16:31:31 2017 ALEXANIAN Antoine
*/

#include "all.h"

int	search_option(int argc, char **argv, char *option);

int		main(int argc, char **argv)
{
  t_room	*rooms;
  t_room	*tmp;
  t_room	*baseRooms;
  t_player	*player;
  char		*command;
  char		*mapsName[MAPNUMBER];
  int		i;
  int		color;

  rooms = NULL;
  tmp = NULL;
  color = search_option(argc, argv, "-c");
  player = malloc(sizeof(t_player));
  player->map = 0;
  player->changeMap = 1;
  player->hasKey = 0;
  player->quit = 0;
  mapsName[0] = my_strdup("map/cargo_dock.map");
  mapsName[1] = my_strdup("map/holding_cells.map");
  mapsName[2] = my_strdup("map/holding_cells2.map");
  mapsName[3] = my_strdup("map/warehouse.map");
  mapsName[4] = my_strdup("map/warehouse2.map");
  i = MAPNUMBER - 1;
  while (i >= 0)
    {
      rooms = init_room(get_mapX(mapsName[i]), get_mapY(mapsName[i]));
      read_map(rooms->map, mapsName[i]);
      rooms->next = (void*)tmp;
      tmp = rooms;
      i--;
    }
  baseRooms = rooms;
  player->x = 0;
  player->y = 0;
  while (!player->quit)
    {
      if (color)
	my_putstr("\033[H\033[J");
      rooms = access_room(baseRooms, player->map);
      if (player->changeMap)
	setSpawn(player, rooms->map, mapsName[player->map]);
      show_room(rooms, player, get_mapX(mapsName[player->map]), get_mapY(mapsName[player->map]));
      command = readline();
      get_command(command, rooms->map, player);
      free(command);
      if (player->map > 1)
	player->quit = 1;
    }
  free(player);
  free_all(baseRooms, rooms, mapsName);
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
