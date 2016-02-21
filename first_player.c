/*
** first_player.c for first_player in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 22:31:01 2016 Peixoto Benjamin
** Last update Sun Feb 21 16:47:42 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>
#include "./lib/my/get_next_line.h"
#include "allum1.h"
#include "my.h"

void	how_many_match3(int *line, int nb_match, int line_choice)
{
  line[line_choice] = line[line_choice] - nb_match;
  print_game_board(line);
}

void	how_many_match2(int *line, int nb_match, int line_choice)
{
  if (nb_match > line[line_choice])
    what_line(line);
  my_putstr("Player removed ");
  my_put_nbr(nb_match);
  my_putstr(" match(es) from line ");
  my_put_nbr(line_choice + 1);
  my_putchar('\n');
}

int	how_many_match(int *line, int line_choice, int count_line, int nb_match)
{
  char	*str;

  while (666)
    {
      my_putstr("Matches: ");
      if ((str = get_next_line(0)) == NULL)
      	return (-2);
      if ((nb_match = my_match_is_a_nb(str, line, line_choice)) != -1)
	how_many_match2(line, nb_match, line_choice);
      else
	{
	  first_player(line);
	  return (-2);
	}
      if (line[nb_match] == 1 && count_line == 1)
	{
	  my_putstr("You lost, too bad..\n");
	  return (-1);
	}
      if (nb_match > 0 && nb_match <= line[line_choice])
	{
	  how_many_match3(line, nb_match, line_choice);
	  return (-1);
	}
    }
}

int     what_line(int *line)
{
  int   line_choice;
  char	*str;

  line_choice = 0;
  while (666)
    {
      my_putstr("Line: ");
      if ((str = get_next_line(0)) == NULL)
	return (-2);
      line_choice = my_line_is_a_nb(str);
      if (line[line_choice - 1] == 0)
	my_putstr("Error: this line is empty\n");
      if (line_choice > 0 && line_choice < 6 && line[line_choice - 1] != 0)
	return (line_choice - 1);
    }
}

int     first_player(int *line)
{
  int   line_choice;
  int	count_line;
  int	nb_match;

  nb_match = 0;
  if ((line_choice = what_line(line)) == -2)
    return (-1);
  count_line = how_many_line_remaining(line);
  if ((how_many_match(line, line_choice, count_line, nb_match)) == -2)
    return (-1);
  return (0);
}
