/*
** my_printf_fonctions.c for my_printf_fonctions in /home/peixot_b/Depot/PSU_2015_my_printf
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Nov 12 13:53:30 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:17:48 2015 Peixoto Benjamin
*/

#include <stdlib.h>
#include <stdarg.h>
#include "./my_printf.h"

int			init_tab(va_list ap, char fptr)
{
  int			r;
  static t_tab_ptr	flags[] = {{'c', &display_char},
				   {'s', &display_str},
				   {'i', &display_dec},
				   {'d', &display_dec},
				   {'b', &display_bin},
				   {'x', &display_hex},
				   {'p', &display_hexp},
				   {'u', &display_unsigned},
				   {'o', &display_oct},
				   {'S', &display_spe},
				   {'X', &display_heX},
				   {0, NULL}};

  r = my_check_flags(ap, flags, fptr);
  return (r);
}

int	my_check_flags(va_list ap, t_tab_ptr flags[], char fptr)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (flags[i].c != 0)
    {
      if (flags[i].c == fptr)
	{
	  j = j + flags[i].fptr(ap);
	  k = 1;
	}
      i = i + 1;
    }
  if (k == 0)
    {
      my_putchar('%');
      my_putchar(fptr);
      j = j + 2;
    }
  return (j);
}

int             my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;

  i = 0;
  va_start(ap, format);
  while (*format)
    {
      if (*format == '%')
	{
	  i = i + init_tab(ap, *(format + 1));
	  format = format + 1;
	}
      else
	{
	  my_putchar(*format);
	  i = i + 1;
	}
      format = format + 1;
    }
  return (i);
}
