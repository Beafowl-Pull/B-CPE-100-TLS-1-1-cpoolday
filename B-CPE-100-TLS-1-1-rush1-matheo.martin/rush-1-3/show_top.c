/*
** EPITECH PROJECT, 2021
** show_top.c
** File description:
** show top for the top line
*/

void show_top(int x, int y)
{
    int n = 0;
    if (y == 1) {
        for (int i = 0; i < x; ++i)
            my_putchar('B');
        my_putchar('\n');
    } else if (x == 1){
        my_putchar('B');
        my_putchar('\n');
    } else if (x == 2) {
        my_putchar('A');
        my_putchar('A');
        my_putchar('\n');
    } else if (x >= 3) {
        my_putchar('A');
        while (n != x - 2) {
            my_putchar('B');
            n++;
        }
        my_putchar ('A');
        my_putchar('\n');
    }
}
