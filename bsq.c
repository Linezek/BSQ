/*
** test3.c for ertyui in /home/galpin_a/galpin_a/HUGOPRO/src
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun Dec 20 22:26:12 2015 Galpin
** Last update Mon Dec 21 12:35:04 2015 Galpin
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"

extern	char		c;
extern	int		largeur;
extern	int		hauteur;
extern	int		i;
extern	int		pos_x;
extern	int		pos_y;

void			check(int **map)
{
  int			x;
  int			y;

  x = 0;
  y = 0;
  while (map[y] != NULL)
    {
      x = 0;
      while (map[y][x] != -1)
	{
	  my_printf("%d", map[y][x]);
	  x = x + 1;
	}
      write(1, "\n", 1);
      y++;
    }
}

int			insert(int **map)
{
  int			x;
  int			y;

  x = 0;
  y = 0;
  while (map[y] != NULL)
    {
      x = 0;
      while (map[y][x] != -1)
	{
	  if (x > 0 && y > 0)
	    map[y][x] = check_square(y, x, map);
	  x = x + 1;
	}
      y++;
    }
}

int			**tab(char **tab)
{
  int			**map;
  int			y;
  int			x;

  y = 0;
  x = 0;
  map = malloc(sizeof(int *) * (hauteur + 1));
  while (tab[y] != NULL)
    {
      map[y] = malloc(sizeof(int) * (largeur + 1));
      x = 0;
      while (tab[y][x] != '\0')
	{
	  if (tab[y][x] == '.')
	    map[y][x] = 1;
	  else if (tab[y][x] == 'o')
	    map[y][x] = 0;
	  x++;
	}
      map[y][x] = -1;
      y++;
    }
  map[y] = NULL;
  return (map);
}

int		check_square(int y, int x, int **tab)
{
  int		a;
  int		b;
  int		c;

  a = tab[y - 1][x];
  b = tab[y][x - 1];
  c = tab[y - 1][x - 1];
  if (a < b)
    b = a;
  if (b < c)
    c = b;
  if (tab[y][x])
    return (c + 1);
}

void		check_all(char **tab)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while (tab[y] != NULL)
    {
      x = 0;
      while (tab[y][x] != '\0')
	{
	  my_printf("%c", tab[y][x]);
	  x = x + 1;
	}
      write(1, "\n", 1);
      y++;
    }
}
