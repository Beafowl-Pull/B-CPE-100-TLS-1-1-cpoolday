/*
** EPITECH PROJECT, 2021
** show_top.c
** File description:
** show top for the top line
*/

void show_top (int x)
{
    int n = 0;
    if (x == 1) {
        return;
    }
    if (x == 2) {
        my_putchar ('/');
        my_putchar ('\\');
        my_putchar('\n');
    }
    if (x >= 3) {
        my_putchar ('/');
        while (n != x - 2) {
            my_putchar ('*');
            n++;
        }
        my_putchar ('\\');
        my_putchar('\n');
    }
}

void show_bottom (int x)
{
    int n = 0;
    if (x == 1) {
        my_putchar ('/');
        my_putchar ('\n');
    }
    if (x == 2) {
        my_putchar ('\\');
        my_putchar ('/');
        my_putchar('\n');
    }
    if (x >= 3) {
        my_putchar ('\\');
        while (n != x - 2) {
            my_putchar ('*');
            n++;
        }
        my_putchar ('/');
        my_putchar('\n');
    }
}