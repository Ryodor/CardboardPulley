##
## Makefile for libmy in /home/axenntio/DEVC/Libmy/alexan_b/libmy_01
## 
## Made by ALEXANIAN Antoine
## Login   <alexan_b@etna-alternance.net>
## 
## Started on  Sat Oct  1 08:39:25 2016 ALEXANIAN Antoine
## Last update Mon Oct  3 22:13:56 2016 ALEXANIAN Antoine
##

CC	= gcc
RM	= rm
AR	= ar
RAN	= ranlib
CFLAGS	= -Wall -Werror -Wextra
OBJS	= my_putchar.o \
	my_isneg.o \
	my_put_nbr.o \
	my_swap.o \
	my_putstr.o \
	my_strlen.o \
	my_getnbr.o \
	my_strcpy.o \
	my_strncpy.o \
	my_strcmp.o \
	my_strncmp.o \
	my_strcat.o \
	my_strncat.o \
	my_strstr.o \
	my_strdup.o \
	my_str_to_wordtab.o
NAME	= libmy.a

.PHONY	:	all clean fclean re

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(AR) r $(NAME) $(OBJS)
		$(RAN) $(NAME)


my_putchar.o	:	my_putchar.c
			$(CC) $(CFLAGS) -c my_putchar.c

my_isneg.o	:	my_isneg.c
			$(CC) $(CFLAGS) -c my_isneg.c

my_put_nbr.o	:	my_put_nbr.c
			$(CC) $(CFLAGS) -c my_put_nbr.c

my_swap.o	:	my_swap.c
			$(CC) $(CFLAGS) -c my_swap.c

my_putstr.o	:	my_putstr.c
			$(CC) $(CFLAGS) -c my_putstr.c

my_strlen.o	:	my_strlen.c
			$(CC) $(CFLAGS) -c my_strlen.c

my_getnbr.o	:	my_getnbr.c
			$(CC) $(CFLAGS) -c my_getnbr.c

my_strcpy.o	:	my_strcpy.c
			$(CC) $(CFLAGS) -c my_strcpy.c

my_strncpy.o	:	my_strncpy.c
			$(CC) $(CFLAGS) -c my_strncpy.c

my_strcmp.o	:	my_strcmp.c
			$(CC) $(CFLAGS) -c my_strcmp.c

my_strncmp.o	:	my_strncmp.c
			$(CC) $(CFLAGS) -c my_strncmp.c

my_strcat.o	:	my_strcat.c
			$(CC) $(CFLAGS) -c my_strcat.c

my_strncat.o	:	my_strncat.c
			$(CC) $(CFLAGS) -c my_strncat.c

my_strstr.o	:	my_strstr.c
			$(CC) $(CFLAGS) -c my_strstr.c

my_strdup.o     :       my_strdup.c
			$(CC) $(CFLAGS) -c my_strdup.c

my_str_to_wordtab.o	:	my_str_to_wordtab.c
	                        $(CC) $(CFLAGS) -c my_str_to_wordtab.c

clean	:
		$(RM) -f $(OBJS)

fclean	: clean
		$(RM) -f $(NAME)

re	: fclean all
