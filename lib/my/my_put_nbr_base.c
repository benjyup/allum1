/*
** my_put_nbr_base.c for my_put_nbr_base in /home/peixot_b/Depot/PSU_2015_my_printf/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Thu Nov 12 21:00:23 2015 Peixoto Benjamin
** Last update Thu Nov 12 21:21:05 2015 Peixoto Benjamin
*/

int	my_put_nbr_base(int n, char *base)
{
  int	d;
  int	i;
  int	base_n;
  int	result;

  i = 0;
  base_n = my_strlen(base);
  if  (n < 0)
    {
      my_putchar('-');
      i = i + 1;
      n = -n;
    }
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
