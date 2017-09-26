/*
** main.c for main in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Tue Feb  9 15:12:04 2016 Peixoto Benjamin
** Last update Thu Feb 25 23:13:53 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>
#include "allum1.h"
#include "my.h"

int	main()
{
  int	*line;

  line = malloc(5 * sizeof(*line));
  if (line == NULL)
    {
      my_putstr("Error with Malloc.\n");
      return (-1);
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
