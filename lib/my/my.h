/*
** my.h for my.h in /home/galpin_a/rendu/PSU_2015_my_printf/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Mon Nov  2 15:39:34 2015 Antoine Galpin
** Last update Mon Dec 21 02:24:20 2015 Galpin
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

typedef struct	s_func
{
  void (*ptrfunc)(va_list ap);
  char key;
}		t_func;

void	my_putchar(char c);
int	my_put_nbr(int nb);
void	my_putnbr_base(int nb, char *base);
int	my_putstr(char *str);
int	my_put_nbrS(int nbr);
int	my_put_octal(int nbr);
int	my_putstr2(char *str);
void	call_flags(const char *format, char d, va_list ap);
int	binary(int nb);
int	my_printf(const char *format, ...);
int	my_put_nbrU(unsigned int nb);
int	hexa_min(int nb);
int	hexa_maj(int nb);
void	manage_octal(char *str);
void	printf_d(va_list ap);
void	printf_i(va_list ap);
void	printf_x(va_list ap);
void	printf_X(va_list ap);
void	printf_u(va_list ap);
void	printf_s(va_list ap);
void	printf_p(va_list ap);
void	printf_S(va_list ap);
void	printf_o(va_list ap);
void	printf_b(va_list ap);
void	printf_P(va_list ap);
void	printf_c(va_list ap);

#endif /* !MY_H_ */
