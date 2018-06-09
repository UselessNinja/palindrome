##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## lib
##

CC = 		gcc

SRC= 		my_str_essential.c	\
		my_str_to_wordtab.c	\
		cmp_args.c		\
		my_getnumber.c

OBJ= 		$(SRC:.c=.o)

CFLAGS = 	-Wall -Wextra

RM = 		rm -f

NAME = 		libmy.a

all: 		$(NAME)

$(NAME): 	$(OBJ)
		$(CC) -c $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: 	clean
		$(RM) $(NAME) ../$(NAME)

re: 		fclean all

.PHONY: 	all clean fclean
