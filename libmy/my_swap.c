/*
** my_swap.c for my_swap in /home/axenntio/DEVC/Jour03/alexan_b/my_swap
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:30:04 2016 ALEXANIAN Antoine
** Last update Wed Sep 28 10:36:18 2016 ALEXANIAN Antoine
*/

void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
