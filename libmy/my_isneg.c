/*
** my_isneg.c for my_isneg in /home/axenntio/DEVC/Jour01/alexan_b/my_isneg
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Mon Sep 26 14:09:51 2016 ALEXANIAN Antoine
** Last update Fri Sep 30 18:34:33 2016 ALEXANIAN Antoine
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      n = 1;
    }
  else
    {
      n = 0;
    }
  return (n);
}
