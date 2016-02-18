/*
** my_getnbr.c for my_get_nbr in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:59:10 2015 Peixoto Benjamin
** Last update Thu Feb 18 00:00:04 2016 Peixoto Benjamin
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	neg;

  i = 0;
  nbr = 0;
  neg = 0;
  while ((str[i] < '0' || str[i] > '9') && str[i] != 0)
    {
      if (str[i] == '-')
	neg = neg + 1;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nbr = nbr * 10 + str[i] - 48;
      i = i + 1;
    }
  if (neg % 2 == 1)
    nbr = nbr * (-1);
  return (nbr);
}
