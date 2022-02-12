/*
** EPITECH PROJECT, 2021
** my_evil_str.c
** File description:
** uwu
*/

char *my_evil_str (char *str)
{
    int a = 0;
    int aa = 0;
    int b = 0;
    char *c = str;
    char t;
    while (str[a] != '\0') {
        a++;
    }
    a--;
    b = a / 2;
    while (b < a) {
        t = str[a];
        c[aa] = str[a];
        c[a] = t;
        aa++;
        a--;
    }
    return (0);
}
