/*
** libmy.h for libmy in /home/axenntio/DEVC/Libmy/alexan_b/libmy_01
** 
** Made by ALEXANIAN Antoine
** Login   <alexan_b@etna-alternance.net>
** 
** Started on  Sat Oct  1 09:50:40 2016 ALEXANIAN Antoine
** Last update Mon Jan 16 04:17:46 2017 ALEXANIAN Antoine
*/

#ifndef __LIBMY_H__
#define __LIBMY_H__
void	my_putchar(char c);
int	my_isneg(int n);
void	my_put_nbr(int nb);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strcat(char *str1, char *str2);
char	*my_strncat(char *str1, char *str2, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_strdup(char *str);
char	**my_str_to_wordtab(char *str);
#endif /* __LIBMY_H__ */
