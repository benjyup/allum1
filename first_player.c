/*
** first_player.c for first_player in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 22:31:01 2016 Peixoto Benjamin
** Last update Thu Feb 18 15:32:21 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include "./lib/my/get_next_line.h"

void	how_many_match2(int *line, int nb_match, int line_choice)
{
  if (nb_match > line[line_choice])
    what_line(line);
  my_putstr("Player removed ");
  my_put_nbr(line[line_choice]);
  my_putstr(" match(es) from line ");
  my_put_nbr(line_choice + 1);
  my_putchar('\n');
}

int	how_many_match(int *line, int line_choice)
{
  int	nb_match;
  int	count_line;

  nb_match = 0;
  count_line = how_many_line_remaining(line);
  while (666)
    {
      my_putstr("Matches: ");
      if ((nb_match = my_getnbr(get_next_line(0))) == NULL)
	  return (-1);
      how_many_match2(line, nb_match, line_choice);
      if (line[nb_match] == 1 && count_line == 1)
	{
	  my_putstr("You lost, too bad..\n");
	  exit (0);
	}
      if (nb_match > 0 && nb_match <= line[line_choice])
	{
	  line[line_choice] = line[line_choice] - nb_match;
	  print_game_board(line);
	  if (how_many_line_remaining(line) == 0)
	    my_putstr("You lost, too bad..\n");
	  return (EXIT_SUCCESS);
	}
    }
}

int	mine_is_a_number(char *str)
{
  int	i;
  int	nb;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Error: invalid input (positive number expected)\n");
	  return (-1);
	}
      i = i + 1;
    }
  if ((nb = my_getnbr(str)) > 5 || nb  == 0)
    {
      my_putstr("Error: this line is out of range\n");
      return (-1);
    }
  return (nb);
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
	return (-1);
      line_choice = mine_is_a_number(str);
      if (line_choice > 0 && line_choice < 6 && line[line_choice - 1] != 0)
	return (line_choice - 1);
    }
}

  void    first_player(int *line)
  {
    int   line_choice;

    my_putstr("Your turn:\n");
    line_choice = what_line(line);
    how_many_match(line, line_choice);
  }
