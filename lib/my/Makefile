##
 ## Makefile for makefile in /home/galpin_a/rendu/Library/test
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Mon Nov  2 15:17:21 2015 Antoine Galpin
## Last update Mon Dec 21 02:23:02 2015 Galpin
##

SRCS  =	my_putchar.c \
	my_put_nbr.c \
	my_putnbr_base.c \
	my_putstr.c \
	my_printf.c \
	my_put_nbrU.c \
	my_put_nbrX.c \
	my_putstrS.c \
	option1.c \
	option2.c \
	option3.c \
	binary.c \

NAME = libmy.a

OBJ = $(SRCS:.c=.o)

RM =	rm -f

all:	$(NAME)

$(NAME):
	gcc -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(WAVE)

fclean:
	$(RM) $(NAME)

re: fclean all
