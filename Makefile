##
## Makefile for Makefile in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
## 
## Made by Peixoto Benjamin
## Login   <peixot_b@epitech.net>
## 
## Started on  Tue Feb  9 15:10:08 2016 Peixoto Benjamin
## Last update Tue Sep 26 11:32:33 2017 Benjamin
##

NAME		=	allum1

CC		=	gcc

CFLAGS		+=	-I./include

LDFLAGS		= 	-L./lib -lmy

RM		=	rm -f

SRCS		=	srcs/main.c \
			srcs/my_game.c \
			srcs/first_player.c \
			srcs/second_player.c \
			srcs/my_game_err.c \
			srcs/my_aff_game.c

OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean
