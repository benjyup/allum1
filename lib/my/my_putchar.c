/*
** my_putchar.c for my_putchar in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:58:15 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:21:33 2015 Peixoto Benjamin
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
