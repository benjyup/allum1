/*
** my_strlen.c for my_strlen in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:59:54 2015 Peixoto Benjamin
** Last update Wed Nov  4 13:59:59 2015 Peixoto Benjamin
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
