/*
** my_getnbr.c for my_getnbr in /home/axenntio/DEVC/Jour05/alexan_b/my_getnbr
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Fri Sep 30 15:05:25 2016 ALEXANIAN Antoine
** Last update Fri Sep 30 17:56:54 2016 ALEXANIAN Antoine
*/

int	my_getnbr(char *str)
{
  int	result;
  int	mult;
  int	i;
  int	nb;

  result = 0;
  mult = 1;
  i = 0;
  nb = 0;
  while ((str[i] > 47 && str[i] < 58) ||
	 ((str[i] == 43 || str[i] == 45) && !nb))
    {
      if (str[i] > 47 && str[i] < 58)
	{
	  result = result * 10 + (str[i] - 48);
	  nb = 1;
	}
      else if (str[i] == 45)
	{
	  mult = -mult;
	}
      i++;
    }
  return (result * mult);
}
