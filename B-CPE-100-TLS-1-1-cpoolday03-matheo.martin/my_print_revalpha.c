/*
** EPITECH PROJECT, 2021
** my_print_revalpha
** File description:
** UwU
*/

int my_putchar(char c);

int my_print_revalpha(void)
{
    int print;
    print = 122;
    while (print >= 97){
        my_putchar (print);
        print = print - 1;
    }
    my_putchar('\n');
    return (0);
}
