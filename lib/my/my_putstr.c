/*
** my_putstr.c for my_putstr in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:58:35 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:23:05 2015 Peixoto Benjamin
*/

#include <string.h>
#include <unistd.h>

int	my_putstr(char *str)
{
  if (str == NULL)
    return (0);
  write(1, str, my_strlen(str));
  return (0);
}
