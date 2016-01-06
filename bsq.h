/*
** bsq.h for zertyui in /home/galpin_a/galpin_a/rendu/CPE_2015_BSQ
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Dec 21 14:20:02 2015 Galpin
** Last update Mon Dec 21 14:20:04 2015 Galpin
*/

#ifndef	BSQ_H_
# define BSQ_H_

int	print_map(char *filepath);
int	print_cross(int **tab);
int	display(int y, int x, char **tab, int memo);
void	call_all(int **int_map, char **map);
int	main(int ac, char **av);
int	open_file(char *filepath);
void	check(int **map);
int	insert(int **map);
int	**tab(char **tab);
int	check_square(int y, int x, int **tab);
void	check_all(char **tab);

#endif /*BSQ_H_*/
