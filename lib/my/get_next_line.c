/*
** get_next_line.c for get_next_line.c in /home/peixot_b/Depot/CPE/CPE_2015_getnextline
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Tue Jan 12 15:07:25 2016 Peixoto Benjamin
** Last update Sun Feb 21 23:13:21 2016 Peixoto Benjamin
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	c;

  c = -1;
  while (src[++c] && c < n)
    dest[c] = src[c];
  if (c == 0 || n == 0)
    dest[c] = 0;
  return (dest);
}

static char	*add_to_line(char *line, int i, char *buff, int *begin)
{
  char		*new_elem;
  int		old_len;

  old_len = (line) ? my_strlen(line) : 0;
  new_elem = malloc((old_len + i + 1) * sizeof(*new_elem));
  my_strncpy(new_elem, line ? line : "", old_len);
  my_strncpy(new_elem + old_len, buff + *begin, i);
  new_elem[old_len + i] = 0;
  *begin += i + 1;
  return (new_elem);
}

char		*get_next_line(const int fd)
{
  static int	begin;
  static char	buff[READ_SIZE + 1];
  static int	buf_base = 0;
  int		i;
  char		*line;

  i = 0;
  line = 0;
  while (1)
    {
      if (begin >= buf_base)
        {
          begin = 0;
          if (!(buf_base = read(fd, buff, READ_SIZE)))
            return (line);
          i = 0;
        }
      if (buff[begin + i] == '\n')
        return (line = add_to_line(line, i, buff, &begin));
      if (begin + i == buf_base - 1)
        line = add_to_line(line, i + 1, buff, &begin);
      ++i;
    }
}
