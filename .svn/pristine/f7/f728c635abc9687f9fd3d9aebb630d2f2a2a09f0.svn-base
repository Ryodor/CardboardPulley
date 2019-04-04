/*
** my_strcat.c for my_strcat in /home/axenntio/DEVC/Jour04/alexan_b/my_strcat
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 11:23:13 2016 ALEXANIAN Antoine
** Last update Mon Jan 16 03:27:56 2017 ALEXANIAN Antoine
*/

int	my_strlen(char *str);

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	dest_len;

  i = 0;
  dest_len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[dest_len] = src[i];
      i++;
      dest_len++;
    }
  dest_len++;
  dest[dest_len] = '\0';
  return (dest);
}
