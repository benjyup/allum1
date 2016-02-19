/*
** my_game_err.c for my_game_err in /home/peixot_b/Depot/CPE/CPE_2015_Allum1
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Feb 18 22:11:19 2016 Peixoto Benjamin
** Last update Fri Feb 19 11:59:04 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>
#include "allum1.h"
#include "my.h"

int	my_line_is_a_nb(char *str)
{
  int	i;
  int	nb;

  i = 0;
  if  (str[0] == 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
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

int	my_match_is_a_nb2(char *str)
{
  int	i;

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
  return (0);
}

int	my_match_is_a_nb(char *str)
{
  int	nb;

  if (str[0] == 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
  if ((my_match_is_a_nb2(str)) == -1)
    return (-1);
  if ((nb = my_getnbr(str)) == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (-1);
    }
  if ((nb = my_getnbr(str)) > 7)
    {
      my_putstr("Error: not enough matches on this line\n");
      return (-1);
    }
  return (nb);
}
