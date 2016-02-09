/*
** my_printf.c for my_printf in /home/peixot_b/PSU_2015_my_printf
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Mon Nov  2 14:45:52 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:01:24 2015 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdarg.h>
#include "./my_printf.h"

int	display_char(va_list ap)
{
  char	i;

  i = (char)va_arg(ap, int);
  my_putchar(i);
  return (1);
}

int	display_str(va_list ap)
{
  char	*str;

  str = va_arg(ap, void *);
  if (str == NULL)
    my_putstr("(null)");
  else
    my_putstr(str);
  return (my_strlen(str));
}

int	display_dec(va_list ap)
{
  int	i;
  int	j;

  j = 0;
  i = va_arg(ap, int);
  j = my_put_nbr(i);
  return (j);
}

int	display_bin(va_list ap)
{
  int	i;
  int	j;

  i = va_arg(ap, int);
  j = my_put_nbr_base(i, "01");
  return (j);
}

int		display_hex(va_list ap)
{
  unsigned int	i;
  int		j;

  i = va_arg(ap, unsigned int);
  j = my_put_nbr_base_unsigned(i, "0123456789abcdef");
  return (j);
}
