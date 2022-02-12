/*
** EPITECH PROJECT, 2021
** my_printfloat
** File description:
** UwU
*/

int my_printfloat(double nb)
{
    int cast;
    double store = nb;
    my_put_nbr((int)nb);
    cast = (int)store;
    my_putchar('.');
    for (int i = 1; i < 3; i++) {
        store = nb * 10 * i;
        cast = (int)store;
        my_put_nbr(cast % 10);
    }
    return (0);
}
