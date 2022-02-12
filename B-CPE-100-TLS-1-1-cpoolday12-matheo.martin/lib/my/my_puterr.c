/*
** EPITECH PROJECT, 2021
** my_puterr
** File description:
** UwU
*/

#include <unistd.h>

int my_strlen(char *str);

void my_puterr(char *str)
{
    write(2, str, my_strlen(str));
}
