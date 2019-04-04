/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/axenntio/DEVC/Jour07/alexan_b/my_str_to_wordtab
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Oct  3 10:15:10 2016 ALEXANIAN Antoine
** Last update Mon Oct  3 22:03:05 2016 ALEXANIAN Antoine
*/

#include <stdlib.h>

char	*my_strncpy(char *dest, char *src, int n);

int     my_str_to_wordtab_cond(char c)
{
  if ((47 < c && 58 > c) || (64 < c && 91 > c) || (96 < c && 123 > c))
    {
      return (1);
    }
  return (0);
}

int	my_nb_word(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (my_str_to_wordtab_cond(str[i]))
	{
	  if (!my_str_to_wordtab_cond(str[i + 1]))
	    {
	      count++;
	    }
	}
      i++;
    }
  return (count);
}

int	my_nb_char(char *str)
{
  int	i;

  i = 0;
  while (my_str_to_wordtab_cond(str[i]))
    i++;
  return (i);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((tab = malloc(my_nb_word(str) * sizeof(*tab))))
    {
      while (str[i] != '\0')
	{
	  if (my_str_to_wordtab_cond(str[i]))
	    {
	      if ((tab[j] = malloc(my_nb_char(&str[i]) * sizeof(**tab))))
		{
		  my_strncpy(tab[j], &str[i], my_nb_char(&str[i]));
		  i += my_nb_char(&str[i]);
		  j++;
		}
	    }
	  i++;
	}
    }
  tab[j] = '\0';
  return (tab);
}
