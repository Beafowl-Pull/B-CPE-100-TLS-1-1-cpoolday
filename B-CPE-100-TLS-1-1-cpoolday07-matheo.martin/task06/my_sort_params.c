/*
** EPITECH PROJECT, 2021
** my_sort_params.c
** File description:
** UwU
*/

int main(int argsc, char **argsv)
{
    my_sort_params(argsc, argsv);
    return 0;
}

void my_sort_params(int nb, char **args)
{
    char **ret[999];
    int arr_num[999];

    for (int i = 0; i < nb; i++) {
        arr_num[i] = args[i][0];
        ret[arr_num[i]] = args[i];
    }
    my_sort_int_array(arr_num, nb);
    for (int i = 0; i < nb; i++)  {
        my_putstr(ret[arr_num[i]]);
        my_putchar('\n');
    }
    return (0);
}