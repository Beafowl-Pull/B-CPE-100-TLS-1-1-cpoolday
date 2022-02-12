/*
** EPITECH PROJECT, 2021
** my_print_comb
** File description:
** UwU
*/

int my_for (int i, int j)
{
    for (int k = j + 1; k < 58; k++) {
        my_putchar(i);
        my_putchar(j);
        my_putchar(k);
        write (1, ", ", 2);
    }
}

int my_print_comb (void)
{
    for (int i = 48; i < 55; i++) {
        for (int j = i + 1; j < 58; j++) {
            my_for (i, j);
        }
    }
    my_putchar('7');
    my_putchar('8');
    my_putchar('9');
    my_putchar('\n');
    return (0);
}

