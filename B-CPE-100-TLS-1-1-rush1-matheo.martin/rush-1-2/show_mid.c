/*
** EPITECH PROJECT, 2021
** show_mid.c
** File description:
** show_mid for the top line
*/

void show_mid(int x, int y)
{
    int times = 0;
    if (y == 1) {
        while (times != x) {
            my_putchar ('*');
            my_putchar ('\n');
            times++;
        }
    }
    for (int i = 0; i < y - 2; ++i) {
        my_putchar('*');
        for (int j = 0; j < x - 2; ++j) {
            my_putchar(' ');
        }
        if (x > 1)
            my_putchar('*');
        my_putchar('\n');
    }
}
