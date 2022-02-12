/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** uwu
*/

int my_putchar (char c);

int my_strlen (char const *str)
{
    int charac;
    int nbr = 0;
    while (str[charac] != '\0') {
        charac++;
        nbr++;
    }
    return (nbr);
}
