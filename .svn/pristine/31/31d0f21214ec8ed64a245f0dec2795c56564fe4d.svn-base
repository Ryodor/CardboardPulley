/*
** my_strncmp.c for my_strncmp in /home/axenntio/DEVC/Jour04/alexan_b/my_strncmp
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:18:02 2016 ALEXANIAN Antoine
** Last update Thu Sep 29 18:51:30 2016 ALEXANIAN Antoine
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
  if (s1[i] < s2[i] && i < n)
    {
      return (-1);
    }
  if (s1[i] > s2[i] && i < n)
    {
      return (1);
    }
  return (0);
}
