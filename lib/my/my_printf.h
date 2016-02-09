/*
** my_printf.h for my_printf.h in /home/peixot_b/Depot/PSU_2015_my_printf/include
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 15:09:04 2015 Peixoto Benjamin
** Last update Mon Nov 16 15:50:02 2015 Peixoto Benjamin
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include <stdarg.h>

int	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr(int nb);
int	my_revstr(char *str);
int	my_put_nbr_base(int n, char *base);
int	my_put_nbr_base_unlong(unsigned long n, char *base);
int	my_put_nbr_base_unsigned(unsigned n, char *base);
int	my_put_nbr_unsigend(unsigned int nb);
int	my_getnbr(char *str);

typedef struct	s_tab_ptr
{
  char		c;
  int		(*fptr)(va_list ap);
}		t_tab_ptr;

int		my_printf(const char *format, ...);
int		init_tab(va_list ap, char fptr);
int		my_check_flags(va_list ap, t_tab_ptr flags[], char fptr);
int		display_char(va_list ap);
int		display_str(va_list ap);
int		display_dec(va_list ap);
int		display_bin(va_list ap);
int		display_hex(va_list ap);
int		display_hexp(va_list ap);
int		display_unsigned(va_list ap);
int		display_oct(va_list ap);
int		display_spe(va_list ap);
int		display_heX(va_list ap);

#endif /* !MY_PRINTF_H_ */
