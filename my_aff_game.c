/*
** my_aff_game.c for my_aff_game in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Feb 25 21:54:38 2016 Peixoto Benjamin
** Last update Thu Feb 25 23:15:59 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>
#include "allum1.h"
#include "my.h"

void	print_space(int nb_match, int i)
{
  if (nb_match == 0)
    my_putstr("       ");
  else if (i == 0)
    my_putstr("   ");
  else if (i == 1)
    my_putstr("  ");
  else if (i == 2)
    my_putstr(" ");
}

void	nb_of_space(int nb_space)
{
  while (nb_space > 0)
    {
      my_putstr(" ");
      nb_space = nb_space - 1;
    }
}

void	print_space_last(int nb_match, int i)
{
  if (i == 0)
    nb_of_space((7 - (nb_match + 3)));
  else if (i == 1)
    nb_of_space((7 - (nb_match + 2)));
  else if (i == 2)
    nb_of_space((7 - (nb_match + 1)));
  else if (i == 3 && nb_match != 7)
    nb_of_space((7 - nb_match));
}

void	print_match(int nb_match, int nb_line)
{
  int	i;

  i = 0;
  my_putstr("*");
  print_space(nb_match, nb_line);
  while (i < nb_match)
    {
      my_putstr("|");
      i = i + 1;
    }
  if (nb_match != 0)
    print_space_last(nb_match, nb_line);
  my_putstr("*\n");
}

void	print_game_board(int *line)
{
  int	i;

  i = 0;
  my_putstr("*********\n");
  while (i < 4)
    {
      print_match(line[i], i);
      i = i + 1;
    }
  my_putstr("*********\n");
}
