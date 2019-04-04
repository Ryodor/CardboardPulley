##
## Makefile for cardboard in /home/axenntio/github/Falling-Rock/step1
## 
## Made by ALEXANIAN Antoine
## Login   <alexan_b@etna-alternance.net>
## 
## Started on  Thu Jan 12 21:04:12 2017 ALEXANIAN Antoine
## Last update Tue Jan 17 13:29:46 2017 ALEXANIAN Antoine
##

.PHONY	:	all step1 step2 step3 clean fclean re makelib

all	:	step1 step2 step3

re	: fclean all

fclean	:
		make -C ./step1/ fclean
		make -C ./step2/ fclean
		make -C ./step3/ fclean

clean	:
		make -C ./step1/ clean
		make -C ./step2/ clean
		make -C ./step3/ clean

step1	:
		make -C ./step1/

step2	:
		make -C ./step2/

step3	:
		make -C ./step3/

