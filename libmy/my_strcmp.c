/*
** my_strcmp.c for my_strcmp in /home/axenntio/DEVC/Jour04/alexan_b/my_strcmp
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:18:02 2016 ALEXANIAN Antoine
** Last update Thu Sep 29 18:48:21 2016 ALEXANIAN Antoine
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      i++;
    }
  if (s2[i] != '\0')
    {
      return (-1);
    }
  return (0);
}
