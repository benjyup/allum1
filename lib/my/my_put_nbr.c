/*
** my_put_nbr.c for my_put_nbr in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:59:35 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:22:27 2015 Peixoto Benjamin
*/

#include <unistd.h>

int	my_put_nbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  while ((nb / div) >= 10)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((nb / div) % 10 + 48);
      div = div / 10;
    }
  return (0);
}
