/*
** main.c for main in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Tue Feb  9 15:12:04 2016 Peixoto Benjamin
** Last update Fri Feb 19 11:53:40 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>
#include "allum1.h"
#include "my.h"

void	print_space(int nb_match, int nb_space, int j)
{
  if (nb_match == 0)
    my_putstr("       ");
  else
    {
      while (j < (nb_space / 2))
	{
	  my_putstr(" ");
	  j = j + 1;
	}
    }
}

void	print_match(int nb_match, int nb_space)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  my_putstr("*");
  print_space(nb_match, nb_space, j);
  j = 0;
  while (i < nb_match)
    {
      my_putstr("|");
      i = i + 1;
    }
  if (nb_match != 0)
    print_space(nb_match, nb_space, j);
  if (((nb_match % 2) == 0) && nb_match != 0)
    my_putstr(" ");
  my_putstr("*\n");
}

void	print_game_board(int *line)
{
  int	i;
  int	nb_space;

  i = 0;
  my_putstr("*********\n");
  while (i < 4)
    {
      nb_space = (7 - line[i]);
      print_match(line[i], nb_space);
      i = i + 1;
    }
  my_putstr("*********\n\n");
}

int	main()
{
  int	*line;

  line = malloc(5 * sizeof(*line));
  if (line == NULL)
    {
      my_putstr("Error with Malloc.\n");
      exit(EXIT_FAILURE);
    }
  line[0] = 1;
  line[1] = 3;
  line[2] = 5;
  line[3] = 7;
  print_game_board(line);
  my_game(line);
  free(line);
  return (0);
}
