 /*
** main.c for Cardboard in /home/axenntio/Cardboard/alexan_b/step1
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Jan 16 03:17:24 2017 ALEXANIAN Antoine
** Last update Thu Jan 19 18:39:33 2017 ALEXANIAN Antoine
*/

#include "all.h"

int	search_option(int argc, char **argv, char *option);

int		main(int argc, char **argv)
{
  t_room	*rooms;
  t_room	*tmp;
  t_room	*baseRooms;
  t_player	*player;
  t_yellow	*yellow;
  t_ennemy	*ennemyTmp;
  t_ennemy	*baseEnnemies;
  t_path	*pathTmp;
  t_path	*pathNext;
  t_path	*basePath;
  char		*command;
  char		*mapsName[MAPNUMBER];
  t_game	gameData;
  int		i;

  gameData.clear = search_option(argc, argv, "-c");
  rooms = NULL;
  tmp = NULL;
  basePath = malloc(sizeof(t_path));
  yellow = malloc(sizeof(t_yellow));
  yellow->turn = 0;
  baseEnnemies = malloc(sizeof(t_ennemy));
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
      read_map(rooms->map, mapsName[i], baseEnnemies);
      rooms->next = (void*)tmp;
      tmp = rooms;
      i--;
    }
  baseRooms = rooms;
  player->x = 0;
  player->y = 0;
  player->hasYellow = 0;
  pathTmp = basePath;
  while (!player->quit)
    {
      if (gameData.clear)
	my_putstr("\033[H\033[J");
      rooms = access_room(baseRooms, player->map);
      if (player->changeMap)
	{
	  setSpawn(player, rooms->map, mapsName[player->map]);
	  yellow->x = player->x;
	  yellow->y = player->y;
	}
      show_room(rooms, player, yellow, mapsName[player->map], baseEnnemies);
      command = readline();
      get_command(command, rooms->map, player);
      update_ennemies(baseEnnemies, mapsName[player->map]);
      ennemies_view(baseEnnemies, mapsName[player->map], rooms->map, player);
      if (there_is_ennemy(baseEnnemies, player->x, player->y, mapsName[player->map]))
	player->quit = 4;
      if (player->hasYellow)
	{
	  if (get_last_path_addr(basePath)->x != player->x ||
	      get_last_path_addr(basePath)->y != player->y)
	    add_path_position(basePath, player->x, player->y);
	  if (yellow->turn == 1)
	    {
	      pathNext = pathTmp->next;
	      if (pathNext != NULL)
		{
		  if (pathNext->x != player->x ||
		      pathNext->y != player->y)
		    {
		      pathTmp = pathNext;
		      yellow->x = pathTmp->x;
		      yellow->y = pathTmp->y;
		    }
		}
	      yellow->turn = 0;
	    }
	  else
	    yellow->turn++;
	  if (there_is_ennemy(baseEnnemies, yellow->x, yellow->y, mapsName[player->map]))
	    player->quit = 3;
	  yellowPhysic(player, yellow);
	}
      free(command);
    }
  free(yellow);
  while (basePath != NULL)
    {
      pathTmp = basePath->next;
      free(basePath);
      basePath = pathTmp;
    }
  while (baseEnnemies != NULL)
    {
      ennemyTmp = baseEnnemies->next;
      free(baseEnnemies->map);
      free(baseEnnemies->path);
      free(baseEnnemies);
      baseEnnemies = ennemyTmp;
    }
  free_all(baseRooms, rooms, mapsName);
  if (gameData.clear)
    my_putstr("\033[H\033[J");
  if (player->quit == 1)
    my_putstr("You've quit the game\n");
  if (player->quit == 2)
    my_putstr("You've kill the Yellow Rooster, GAME OVER\n");
  if (player->quit == 3)
    my_putstr("An ennemy have kill the Yellow Rooster, GAME OVER\n");
  if (player->quit == 4)
    my_putstr("An ennemy has spotted you, GAME OVER\n");
  free(player);
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
