/*
** my_printf_fonctions_2.c for my_printf_fonctions_2 in /home/peixot_b/Depot/PSU_2015_my_printf
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Fri Nov 13 16:02:00 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:01:39 2015 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdarg.h>
#include "./my_printf.h"

int		display_hexp(va_list ap)
{
  int		i;
  void		*pointeur;

  i = 0;
  pointeur = va_arg(ap, void *);
  my_putstr("0x");
  i = i + 2;
  i = i + my_put_nbr_base_unlong((unsigned long)pointeur, "0123456789abcdef");
  return (i);
}

int		display_unsigned(va_list ap)
{
  int		i;
  unsigned int	j;

  i = va_arg(ap, unsigned int);
  j = my_put_nbr_unsigned(i);
  return (j);
}

int		display_oct(va_list ap)
{
  int		i;
  int		j;

  i = va_arg(ap, unsigned int);
  j = my_put_nbr_base_unsigned(i, "01234567");
  return (j);
}

int		display_spe(va_list ap)
{
  return (0);
}

int		display_heX(va_list ap)
{
  unsigned int  i;
  int           j;

  i = va_arg(ap, unsigned int);
  j = my_put_nbr_base_unsigned(i, "0123456789ABCDEF");
  return (j);
}
