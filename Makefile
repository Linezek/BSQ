##
## Makefile for Makefile in /home/galpin_a/rendu/PSU_2015_my_printf
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Tue Nov  3 19:07:04 2015 Antoine Galpin
## Last update Mon Dec 21 20:55:20 2015 Galpin
##

NAME		= bsq

LDFLAGS		+= lib/libmy.a

SRCS		+= bsq.c \
		   display.c \
		   main.c \
		   open_file.c 

CC		= gcc

OBJS		= $(SRCS:.c=.o)

WAVE		= *~

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)
	$(RM) $(WAVE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
