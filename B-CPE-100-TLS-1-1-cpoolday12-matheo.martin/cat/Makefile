##
## EPITECH PROJECT, 2021
## makefile
## File description:
## UwU
##

CC = gcc

RM = rm -f

SRC = $(shell find . -type f -name '*c')

OBJ = $(SRC:.c=.o)

all:
	make -C ../lib/my fclean
	make -C ../lib/my
	gcc -o cat *.c -L../lib/my -lmy

clean: $(shell rm -f *.o)

fclean: clean
		$(shell rm -f cat)

re: fclean all
