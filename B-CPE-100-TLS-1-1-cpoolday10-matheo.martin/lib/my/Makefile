##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC = $(shell find . -type f -name '*.c')

OBJ = $(SRC:.c=.o)

NAMEL = libmy.a

NAMEI = my.h

all: $(NAMEL)

$(NAMEL): $(OBJ)
	ar rc $(NAMEL) $(OBJ)
	cp $(NAMEI) ../../include/$(NAMEI)
	cp $(NAMEL) ../$(NAMEL)
	make clean

clean : $(shell rm -f $(OBJ))
