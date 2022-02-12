/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** uwu
*/

#include <unistd.h>

int my_strlen(char *str);

void my_putchar(char *str)
{
    write(1, str, my_strlen(str));
}
