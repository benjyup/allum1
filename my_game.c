/*
** my_game.c for my_game in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 21:50:19 2016 Peixoto Benjamin
** Last update Wed Feb 17 23:50:13 2016 Peixoto Benjamin
*/

#include <stdlib.h>

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

void	my_game(int *line)
{
  int	count_line;

  count_line = how_many_line_remaining(line);
  while (count_line != 0)
    {
      first_player(line);
      second_player(line);
      count_line = how_many_line_remaining(line);
    }
}
