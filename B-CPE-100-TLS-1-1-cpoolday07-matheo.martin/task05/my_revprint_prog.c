/*
** EPITECH PROJECT, 2021
** my_revprint_prog
** File description:
** UwU
*/

int main(int argc, char **argv)
{
    my_print_prog(argc, argv);
    return (0);
}

int my_revprint_prog(int args_nb, char **args)
{
    char **rev[999];
    int loop = 0;
    int nb = args_nb - 1;

    for (int i = 0; i < args_nb; i++) {
        rev[i + 1] = args[nb];
        my_putstr(rev[i + 1]);
        my_putchar('\n');
        nb--;
    }
    return (0);
}
