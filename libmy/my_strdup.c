/*
** my_strdup.c for my_strdup in /home/axenntio/DEVC/Jour07/alexan_b/my_strdup
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Oct  3 09:35:37 2016 ALEXANIAN Antoine
** Last update Mon Oct  3 16:27:22 2016 ALEXANIAN Antoine
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*dup;
  int	len;
  int	i;

  len = my_strlen(str);
  if ((dup = malloc((len + 1) * sizeof(char))))
    {
      i = 0;
      while (str[i] != '\0')
	{
	  dup[i] = str[i];
	  i++;
	}
      dup[i] = '\0';
    }
  return (dup);
}
