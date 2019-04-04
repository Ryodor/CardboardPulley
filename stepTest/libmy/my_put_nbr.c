/*
** my_put_nbr.c for my_put_nbr in /home/axenntio/DEVC/Jour05/alexan_b/my_put_nbr
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Fri Sep 30 12:35:24 2016 ALEXANIAN Antoine
** Last update Sat Oct  1 07:44:14 2016 ALEXANIAN Antoine
*/

void		my_putchar(char c);

void		my_put_nbr(int n)
{
  int		i;
  unsigned int	nb;

  i = 1;
  if (n < 0)
    {
      my_putchar('-');
      nb = -n;
    }
  else
    {
      nb = n;
    }
  while ((nb / i) >= 10)
    {
      i *= 10;
    }
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + 48);
      i /= 10;
    }
}
