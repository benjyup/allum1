/*
** my_put_nbr_unsigned.c for my_put_nbr_unsigned in /home/peixot_b/Depot/PSU_2015_my_printf/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Sat Nov 14 16:56:34 2015 Peixoto Benjamin
** Last update Sat Nov 14 16:58:33 2015 Peixoto Benjamin
*/

int		my_put_nbr_unsigned(unsigned int nb)
{
  int	i;

  i = 0;
  if (nb >= 4294967295)
    return (0);
  if (nb == 0)
    {
      my_putstr("0\b");
      i = i + 1;
    }
  if (nb >= 10)
    {
      i = i + my_put_nbr(nb / 10);
      i = i + my_put_nbr(nb % 10);
    }
  else if (nb <= 9)
    {
      my_putchar(nb + 48);
      i = i + 1;
    }
  return (i);
}
