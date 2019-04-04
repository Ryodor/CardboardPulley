/*
** my_strncat.c for my_strncat in /home/axenntio/DEVC/Jour04/alexan_b/my_strncat
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 13:48:13 2016 ALEXANIAN Antoine
** Last update Sat Oct  1 09:40:22 2016 ALEXANIAN Antoine
*/

int	my_strlen(char *str);

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	dest_len;

  dest_len = my_strlen(dest);
  while (src[i] != '\0' && i < n)
    {
      dest[dest_len] = src[i];
      i++;
      dest_len++;
    }
  dest_len++;
  dest[dest_len] = '\0';
  return (dest);
}
