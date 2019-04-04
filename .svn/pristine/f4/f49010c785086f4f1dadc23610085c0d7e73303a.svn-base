/*
** my_strncpy.c for my_strncpy in /home/axenntio/DEVC/Jour04/alexan_b/my_strncpy
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Thu Sep 29 10:02:31 2016 ALEXANIAN Antoine
** Last update Thu Sep 29 18:40:19 2016 ALEXANIAN Antoine
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	end;

  i = 0;
  end = 0;
  while (i < n)
    {
      if (src[i] == '\0')
	{
	  end = 1;
	}
      if (end == 0)
	{
	  dest[i] = src[i];
	}
      i++;
    }
  return (dest);
}
