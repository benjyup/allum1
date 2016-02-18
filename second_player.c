/*
** second_player.c for second_player in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Feb 17 23:03:18 2016 Peixoto Benjamin
** Last update Thu Feb 18 15:49:31 2016 Peixoto Benjamin
*/

#include <stdlib.h>

int	computer(int *line, int count_line, int i)
{
  while (i < 5)
    {
      if (line[i] != 0 && count_line >= 2)
	{
	  remove_all_matches(line, i);
	  return (EXIT_SUCCESS);
	}
      if (line[i] > 1)
	{
	  remove_partially_matches(line, i);
	  return (EXIT_SUCCESS);
	}
      if (count_line == 1)
	{
	  if (line[i] == 1)
	    {
	      remove_all_matches(line, i);
	      my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
	      return (EXIT_SUCCESS);
	    }
	}
      i = i + 1;
    }
}

void	my_ia_bot(int *line)
{
  /* a remplacer dans secondplayer */
  int	i;
  int	count_line;

  i = 0;
  count_line = how_many_line_remaining(line);
  computer(line, count_line, i);
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
  return (EXIT_SUCCESS);
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
  return (EXIT_SUCCESS);
}

int	second_player(int *line)
{
  int	count_line;

  count_line = how_many_line_remaining(line);
  if (count_line == 0)
    exit (0);
  my_putstr("AI’s turn...\n");
  if (count_line == 5)
    remove_all_matches(line, 0);
  if (count_line < 5)
    my_ia_bot(line);
}
