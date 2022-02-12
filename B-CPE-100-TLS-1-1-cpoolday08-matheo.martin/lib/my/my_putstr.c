/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** uwu
*/

int my_putchar (char c);

int my_putstr (char const *str)
{
    int charac;
    while (str[charac] != '\0') {
        my_putchar(str[charac]);
        charac++;
    }
    return 0;
}
