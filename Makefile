##
## Makefile for Makefile in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
## 
## Made by Peixoto Benjamin
## Login   <peixot_b@epitech.net>
## 
## Started on  Tue Feb  9 15:10:08 2016 Peixoto Benjamin
## Last update Fri Feb 19 11:40:15 2016 Peixoto Benjamin
##

NAME		=	allum1

CC		=	gcc

CFLAGS		+=	-I./include -Wall -W -Wextra

LDFLAGS		= 	-L./lib -lmy

RM		=	rm -f

SRCS		=	main.c \
			my_game.c \
			first_player.c \
			second_player.c \
			my_game_err.c

OBJS		=	$(SRCS:.c=.o)

all: library $(NAME)

library:
	make -C lib/my

library-re:
	make -C lib/my re

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	make -C lib/my clean
	$(RM) $(OBJS)

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: fclean library-re all

.PHONY:	library all clean fclean
