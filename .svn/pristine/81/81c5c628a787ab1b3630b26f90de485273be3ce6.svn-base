
#include "all.h"
#include "ennemy.h"

t_ennemy		*new_ennemy(t_ennemy *bad_boy, unsigned int x,
				  unsigned int y, unsigned int map)
{
  t_ennemy		*next;
  t_ennemy		*new_boy;

  new_boy = malloc(sizeof(t_ennemy));
  next = bad_boy;
  new_boy->x = x;
  new_boy->y = y;
  new_boy->map = map;
  new_boy->view = '<';
  new_boy->next = NULL;
  while (next != NULL)
    {
      next = next->next;
    }
  next = new_boy;
  return (bad_boy);
}
