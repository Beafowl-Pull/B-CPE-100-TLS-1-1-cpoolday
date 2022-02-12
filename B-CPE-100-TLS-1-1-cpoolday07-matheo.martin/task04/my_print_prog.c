/*
** EPITECH PROJECT, 2021
** my_print_prog
** File description:
** UWU
*/

int main(int argc, char **argv)
{
    my_print_prog(argc, argv);
    return (0);
}

int my_print_prog(int args_nb, char **args)
{
    int loop = 0;

    if (args_nb > 0) {
        while (loop >= args_nb) {
            my_putstr(args[loop]);
            my_putstr('\n');
            loop++;
        }
    }
    return (0);
}
