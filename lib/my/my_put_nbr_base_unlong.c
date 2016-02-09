/*
** my_put_nbr_base_unsigned_long.c for my_put_nbr_base_unsigned_long in /home/peixot_b/Depot/PSU_2015_my_printf/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Nov 12 21:26:15 2015 Peixoto Benjamin
** Last update Mon Nov 16 14:57:08 2015 Peixoto Benjamin
*/

int			my_put_nbr_base_unlong(unsigned long n, char *base)
{
  unsigned long		d;
  unsigned long		i;
  unsigned int		base_n;
  unsigned int		result;

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
