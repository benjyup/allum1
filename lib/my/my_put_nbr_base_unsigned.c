/*
** my_put_nbr_base_unsigned.c for my_put_nbr_base_unsigned in /home/peixot_b/Depot/PSU_2015_my_printf/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Nov 12 21:21:37 2015 Peixoto Benjamin
** Last update Thu Nov 12 21:29:19 2015 Peixoto Benjamin
*/

int		my_put_nbr_base_unsigned(unsigned n, char *base)
{
  unsigned	d;
  unsigned	i;
  unsigned	base_n;
  unsigned	result;

  i = 0;
  base_n = my_strlen(base);
  d = 1;
  while ((n / d) >= base_n)
    d = d * base_n;
  while (d > 0)
    {
      result = (n / d) % base_n;
      my_putchar(base[result]);
      i = i + 1;
      d = d / base_n;
    }
  return (i);
}
