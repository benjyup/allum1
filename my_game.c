/*
** my_game.c for my_game in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 21:50:19 2016 Peixoto Benjamin
** Last update Sun Feb 21 17:23:14 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include "allum1.h"
#include "my.h"

int	how_many_line_remaining(int *line)
{
  int	x;
  int	nb_line;

  x = 0;
  nb_line = 5;
  while (x <= 4)
    {
      if (line[x] == 0)
	nb_line = nb_line - 1;
      x = x + 1;
    }
  return (nb_line);
}

int	my_game(int *line)
{
  int	count_line;

  count_line = how_many_line_remaining(line);
  while (count_line != 0)
    {
      my_putstr("\nYour turn:\n");
      if (first_player(line) == -1)
	  return (-1);
      second_player(line);
      count_line = how_many_line_remaining(line);
    }
  return (0);
}
