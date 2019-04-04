/*
** my_strcpy.c for my_strcpy in /home/axenntio/DEVC/Jour04/alexan_b/my_strcpy
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Wed Sep 28 23:12:43 2016 ALEXANIAN Antoine
** Last update Thu Sep 29 18:28:45 2016 ALEXANIAN Antoine
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
