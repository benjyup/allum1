/*
** my_revstr.c for my_revstr in /home/peixot_b/Depot/PSU_2015_my_printf_bootstrap/lib/my
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Wed Nov  4 13:58:49 2015 Peixoto Benjamin
** Last update Mon Nov 16 16:23:24 2015 Peixoto Benjamin
*/

char	*my_revstr(char *str)
{
  char	cpy;
  int	i;
  int	y;

  cpy = 'a';
  i = 0;
  y = (my_strlen(str) - 1);
  while (i < (my_strlen(str) / 2) && str[i] != 0)
    {
      cpy = str[i];
      str[i] = str[y];
      str[y] = cpy;
      i = i + 1;
      y = y - 1;
    }
  return (str);
}
