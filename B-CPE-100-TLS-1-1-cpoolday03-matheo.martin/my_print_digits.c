/*
** EPITECH PROJECT, 2021
** my_print_digits
** File description:
** UwU
*/

int my_putchar (char c);

int my_print_digits(void)
{
    int print;
    print = 48;
    while (print <= 57){
        my_putchar(print);
        print = print + 1;
    }
    my_putchar('\n');
    return (0);
}
