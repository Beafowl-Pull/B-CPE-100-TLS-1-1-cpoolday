/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** UwU
*/

int my_putchar(char c );

int my_print_alpha(void)
{
    int print;
    print = 97;
    while (print <= 122){
        my_putchar (print);
        print = print + 1;
    }
    my_putchar('\n');
    return (0);
}
