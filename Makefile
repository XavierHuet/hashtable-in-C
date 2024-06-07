##
## EPITECH PROJECT, 2024
## B-CPE-110-RUN-1-1-secured-marya.madi
## File description:
## Makefile
##

SRC		=		src/main.c

LIB			=		lib/my/hashing.c					\
					lib/my/my_getnbr.c					\
					lib/my/my_put_nbr.c					\
					lib/my/my_putchar_error.c			\
					lib/my/my_putchar.c					\
					lib/my/my_putstr_error.c			\
					lib/my/my_strcmp.c					\
					lib/my/my_strdup.c					\
					lib/my/my_strndup.c					\
					lib/my/my_strto_word_array.c		\
					lib/my/my_float.c					\
					lib/my/my_free.c					\
					lib/my/my_printf.c					\
					lib/my/my_putnbr_base.c				\
					lib/my/my_scient_maj.c				\
					lib/my/my_scient.c					\
					lib/my/type.c						\
					lib/my/create_hashtable.c			\
					lib/my/destroy_hashtable.c			\
					lib/my/disp_linked_list.c			\
					lib/my/search.c						\
					lib/my/function.c					\
					lib/my/function_2.c					\
					lib/my/my_putstr.c

CFLAGS 	= -Iinclude
OBJ		=	$(LIB:.c=.o)

NAME		=		libhashtable.a

BINARY = secured

ERROR = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp lib/my/hashtable.h include
	cp lib/my/my.h include

clean:
	rm -rf *~
	rm -rf *#
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf lib/my/$(NAME)
	rm -rf $(BINARY)

re: fclean all

run_local: re
	gcc -o $(BINARY) $(SRC) $(ERROR) -Iinclude -L . -l hashtable
