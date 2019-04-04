##
## Makefile for cardboard in /home/axenntio/github/Falling-Rock/step1
## 
## Made by ALEXANIAN Antoine
## Login   <alexan_b@etna-alternance.net>
## 
## Started on  Thu Jan 12 21:04:12 2017 ALEXANIAN Antoine
## Last update Tue Jan 17 19:11:11 2017 ALEXANIAN Antoine
##

CC	= gcc
RM	= rm
CFLAGS	= -Wall -Werror -Wextra
SRCS	= main.c \
	  generation.c \
	  map.c \
	  movement.c \
	  input.c \
	  commands.c \
	  action.c \
	  player.c
OBJS	= $(SRCS:%.c=%.o) 
NAME	= not_mg

.PHONY	:	all clean fclean re makelib

all	:	makelib $(NAME)

$(NAME)	:	$(OBJS) 
		$(CC) $(OBJS) -o $(NAME) -L../libmy/ -lmy

.c.o	:
		$(CC) $(CFLAGS) -c $<

clean	:
		$(RM) -f $(OBJS)

fclean	: clean
		$(RM) -f $(NAME)

re	: fclean all

makelib	:
		make -C ../libmy/
