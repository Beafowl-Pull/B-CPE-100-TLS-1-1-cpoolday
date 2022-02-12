/*
** EPITECH PROJECT, 2021
** rush.c
** File description:
** Compilation of show mid and showtop
*/

void inv(void)
{
    my_putchar ('I');
    my_putchar ('n');
    my_putchar ('v');
    my_putchar ('a');
    my_putchar ('l');
    my_putchar ('i');
    my_putchar ('d');
    my_putchar (' ');
    my_putchar ('s');
    my_putchar ('i');
    my_putchar ('z');
    my_putchar ('e');
    my_putchar ('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        inv();
        return;
    }
    if (y == 1) {
        show_mid(x, y);
    } else if (x == 2 && y == 2) {
        my_putchar('/');
        my_putchar('\\');
        my_putchar('\n');
        my_putchar('\\');
        my_putchar('/');
        my_putchar('\n');
    } else {
        show_top(x);
        show_mid(x, y);
        show_bottom(x);
    }
}
