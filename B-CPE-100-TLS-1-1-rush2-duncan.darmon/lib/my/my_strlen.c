/*
** EPITECH PROJECT, 2021
** POOL DAY 04
** File description:
** TASK 03
*/

int my_strlen(char const *str)
{
    int nchar = 0;
    while (str[nchar] != '\0') {
        nchar++;
    }
    return (nchar);
}
