##
## Makefile for Makefile in /home/peixot_b/Depot/template/lib/my
## 
## Made by Peixoto Benjamin
## Login   <peixot_b@epitech.net>
## 
## Started on  Mon Nov 23 12:40:09 2015 Peixoto Benjamin
## Last update Fri Feb 19 12:07:50 2016 Peixoto Benjamin
##


SRCS	= my_getnbr.c \
	 my_putchar.c \
	 my_put_nbr_base.c \
	 my_put_nbr_base_unlong.c \
	 my_put_nbr_base_unsigned.c \
	 my_put_nbr.c \
	 my_put_nbr_unsigned.c \
	 my_putstr.c \
	 my_revstr.c \
	 my_strlen.c \
	 get_next_line.c \
	 my_int_to_char.c

NAME	= libmy.a

NEW_L	= ../libmy.a

OBJS	= $(SRCS:.c=.o)

CC	= gcc

CP	= cp -f

RM	= rm -f

AR	= ar

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) rc $(NAME) $(OBJS)
	$(CP) $(NAME) $(NEW_L)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(NEW_L)

re: fclean all

.PHONY: all clean fclean re
