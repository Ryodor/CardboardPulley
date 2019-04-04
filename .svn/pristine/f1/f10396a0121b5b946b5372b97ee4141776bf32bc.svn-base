/*
** my_strstr.c for my_strstr in /home/axenntio/DEVC/Jour04/alexan_b/my_strstr
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:54:50 2016 ALEXANIAN Antoine
** Last update Sat Oct  1 10:16:38 2016 ALEXANIAN Antoine
*/

int	my_strlen(char *str);
int	my_strncmp(char *s1, char *s2, int n);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	len;
  int	max_len;

  len = my_strlen(to_find);
  max_len = my_strlen(str);
  i = 0;
  while (i < (max_len - len + 1))
    {
      if (my_strncmp(str, to_find, len) == 0)
	{
	  return (str);
	}
      i++;
      str++;
    }
  return (0);
}
