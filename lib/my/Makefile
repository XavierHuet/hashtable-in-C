##
## EPITECH PROJECT, 2024
## my
## File description:
## Makefile
##

SRC 	=		hashing.c		\
				my_getnbr.c		\
				my_put_nbr.c		\
				my_putchar_error.c		\
				my_putchar.c		\
				my_putstr_error.c		\
				my_strcmp.c		\
				my_strdup.c		\
				my_strndup.c		\
				my_strto_word_array.c		\
				my_putstr_error.c	\
				my_float.c	\
				function_2.c	\
				function.c	\
				my_free.c	\
				my_printf.c	\
				my_putnbr_base.c	\
				my_scient_maj.c	\
				my_scient.c		\
				type.c			\
				hashtable.c


OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

all: $(NAME)
$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include
	cp hashtable.h ../../include
	cp $(NAME) ../../

clean:
	rm -rf *~
	rm -rf *#
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf ../../$(NAME)

re: fclean all
