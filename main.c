/*
** main.c for zertyuio in /home/galpin_a/galpin_a/rendu/CPE_2015_BSQ/src
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Dec 21 01:03:57 2015 Galpin
** Last update Mon Dec 21 02:57:22 2015 Galpin
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"

char		c = '\0';
int		largeur = 0;
int		hauteur = 0;
int		i = 0;
int		pos_x = 0;
int		pos_y = 0;

void		call_all(int **int_map, char **map)
{
  insert(int_map);
  print_cross(int_map);
  display(pos_y, pos_x, map, int_map[pos_y][pos_x]);
  check_all(map);
  free(map);
}

int		main(int ac, char **av)
{
  if (ac != 2)
    return (-1);
  if (open_file(av[1]) == -1)
    return (-1);
  print_map(av[1]);
}
