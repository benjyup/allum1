/*
** second_player.c for second_player in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 23:03:18 2016 Peixoto Benjamin
** Last update Thu Feb 25 22:28:43 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include "allum1.h"
#include "my.h"

int	computer(int *line, int count_line, int i)
{
  while (i < 5)
    {
      if (line[i] != 0 && count_line >= 2)
	{
	  remove_all_matches(line, i);
	  return (0);
	}
      if (line[i] > 1)
	{
	  remove_partially_matches(line, i);
	  return (0);
	}
      if (count_line == 1)
	{
	  if (line[i] == 1)
	    {
	      remove_all_matches(line, i);
	      my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
	      return (0);
	    }
	}
      i = i + 1;
    }
  return (0);
}

int	remove_partially_matches(int *line, int nb_line)
{
  my_putstr("AI removed ");
  my_put_nbr((line[nb_line]) - 1);
  my_putstr(" match(es) from line ");
  my_put_nbr(nb_line + 1);
  my_putchar('\n');
  line[nb_line] = 1;
  print_game_board(line);
  return (0);
}

int	remove_all_matches(int *line, int nb_line)
{
  my_putstr("AI removed ");
  my_put_nbr(line[nb_line]);
  my_putstr(" match(es) from line ");
  my_put_nbr(nb_line + 1);
  my_putchar('\n');
  line[nb_line] = 0;
  print_game_board(line);
  return (0);
}

int	second_player(int *line)
{
  int	count_line;

  if (how_many_line_remaining(line) == 0)
    {
      my_putstr("You lost, too bad..\n");
      return (0);
    }
  count_line = how_many_line_remaining(line);
  if (count_line == 0)
    exit (0);
  my_putstr("\nAI's turn...\n");
  if (count_line == 5)
    remove_all_matches(line, 0);
  if (count_line < 5)
    {
      count_line = how_many_line_remaining(line);
      computer(line, count_line, 0);
    }
  return (0);
}
