/*
** display.c for zertyuio in /home/galpin_a/galpin_a/rendu/CPE_2015_BSQ/src
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Dec 21 01:06:16 2015 Galpin
** Last update Mon Dec 21 19:00:27 2015 Galpin
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

int			display(int y, int x, char **tab, int memo)
{
  int			cols;
  int			lines;
  int			data;

  cols = x;
  lines = y;
  lines = y - memo;
  while (y > lines)
    {
      x = cols;
      data = memo;
      while (data > 0)
	{
	  tab[y][x] = 'x';
	  x--;
	  data--;
	}
      y--;
    }
}

int			print_cross(int **tab)
{
  int			x;
  int			y;
  int			memo;

  x = 0;
  y = 0;
  memo = 0;
  while (tab[y] != NULL)
    {
      x = 0;
      while (tab[y][x] != -1)
	{
	  if (tab[y][x] > memo)
	    {
	      memo = tab[y][x];
	      pos_x = x;
	      pos_y = y;
	    }
	  x = x + 1;
	}
      y++;
    }
}

int			print_map(char *filepath)
{
  int			fd;
  char			**map;
  int			**int_map;

  map = (char **)malloc(sizeof(char *) * (hauteur + 1));
  fd = open(filepath, O_RDONLY);
  i = 0;

  while (read(fd, &c, 1) > 0)
    {
      if (c == '\0' || c == '\n')
	break;
    }
  while (i < hauteur)
    {
      map[i] = (char *)malloc(sizeof(char) * (largeur + 1));
      read(fd, map[i], largeur);
      map[i][largeur - 1] = '\0';
      i = i + 1;
    }
  map[i] = NULL;
  close(fd);
  int_map = tab(map);
  call_all(int_map, map);
}
