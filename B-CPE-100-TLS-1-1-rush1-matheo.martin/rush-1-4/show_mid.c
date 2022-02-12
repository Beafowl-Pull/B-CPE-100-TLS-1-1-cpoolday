/*
** EPITECH PROJECT, 2021
** show_mid.c
** File description:
** show_mid for the top line
*/

void show_mid(int x, int y)
{
    if (y < 2)
        return;
    for (int i = 0; i < y - 2; ++i) {
        my_putchar('B');
        for (int j = 0; j < x - 2; ++j) {
            my_putchar(' ');
        }
        if (x > 1)
            my_putchar('B');
        my_putchar('\n');
    }
}
