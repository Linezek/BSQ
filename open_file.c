/*
** open_file.c for azertyui in /home/galpin_a/galpin_a/rendu/CPE_2015_BSQ/src
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Dec 21 01:01:30 2015 Galpin
** Last update Mon Dec 21 13:06:31 2015 Galpin
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

int			open_file(char *filepath)
{
  int			fd;
  char			**map;
  int			i;

  i = 0;
  if ((fd = open(filepath, O_RDONLY)) < 0)
    return (-1);
  while (read(fd, &c, 1) > 0)
    {
      if (c == '\0' || c == '\n')
	break;
    }
  while (read(fd, &c, 1) > 0)
    {
      if (hauteur == 0 && c != '\n' && i == 0)
	largeur = largeur + 1;
      if (c == '\n')
	{
	  hauteur = hauteur + 1;
	  if (i == 0)
	    largeur++;
	  i = 1;
	}
    }
  return (0);
}
