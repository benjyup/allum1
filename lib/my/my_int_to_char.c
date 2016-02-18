/*
** my_int_to_char.c for my_int_to_char in /home/peixot_b/Depot/CPE/CPE_2015_Allum1/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Feb 18 13:36:40 2016 Peixoto Benjamin
** Last update Fri Feb 19 00:11:22 2016 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdio.h>

char	*my_int_to_char(int nbr, int s, int i, int j)
{
  char  *str;

  str = NULL;
  i = nbr;
  while (i)
    {
      i = i / 10;
      s = s + 1;
    }
  str = malloc(sizeof(char) * (s + j + 1));
  if (str == NULL)
    return (NULL);
  i = s + j - 1;
  while (i >= j)
    {
      str[i] = nbr % 10 + '0';
      nbr = nbr / 10;
      i = i - 1;
    }
  if (j)
    str[0] = '-';
  str[s + j] = '\0';
  return (str);
}
