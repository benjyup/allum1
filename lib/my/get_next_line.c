/*
** get_next_line.c for get_next_line.c in /home/peixot_b/Depot/CPE/CPE_2015_getnextline
** 
** Made by Peixoto Benjamin
** Login   <peixot_b@epitech.net>
** 
** Started on  Tue Jan 12 15:07:25 2016 Peixoto Benjamin
** Last update Sun Feb 21 17:03:43 2016 Peixoto Benjamin
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"

void	*xmalloc(unsigned int s)
{
  void	*p;

  if ((p = malloc(s)) == 0)
    {
      my_putstr("Not enough memory.\n");
    }
  return (p);
}

void	xfree(void *p)
{
  if (p)
    free(p);
}

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

static char	*add_to_line(char *line, int cur, char *buff, int *start)
{
  char		*new_elem;
  int		old_len;

  old_len = (line) ? my_strlen(line) : 0;
  new_elem = malloc((old_len + cur + 1) * sizeof(*new_elem));
  my_strncpy(new_elem, line ? line : "", old_len);
  my_strncpy(new_elem + old_len, buff + *start, cur);
  new_elem[old_len + cur] = 0;
  if (line)
    xfree(line);
  *start += cur + 1;
  return (new_elem);
}

char		*get_next_line(const int fd)
{
  static char	buff[READ_SIZE + 1];
  static int	buf_base = 0;
  static int	start;
  int		cur;
  char		*line;

  cur = 0;
  line = 0;
  while (1)
    {
      if (start >= buf_base)
        {
          start = 0;
          if (!(buf_base = read(fd, buff, READ_SIZE)))
            return (line);
          cur = 0;
        }
      if (buff[start + cur] == '\n')
        return (line = add_to_line(line, cur, buff, &start));
      if (start + cur == buf_base - 1)
        line = add_to_line(line, cur + 1, buff, &start);
      ++cur;
    }
}
