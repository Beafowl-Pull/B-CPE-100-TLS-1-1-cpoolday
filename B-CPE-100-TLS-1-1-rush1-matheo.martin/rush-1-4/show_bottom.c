/*
** EPITECH PROJECT, 2021
** show_bottom.c
** File description:
** show bottom for the last line
*/

void show_bottom(int x, int y)
{
    int n = 0;
    if (x == 1) {
        my_putchar('B');
        my_putchar('\n');
    }
    if (x == 2) {
        my_putchar('A');
        my_putchar('C');
        my_putchar('\n');
    }
    if (x >= 3) {
        my_putchar ('A');
        while (n != x - 2) {
            my_putchar('B');
            n++;
        }
        my_putchar('C');
        my_putchar('\n');
    }
}
