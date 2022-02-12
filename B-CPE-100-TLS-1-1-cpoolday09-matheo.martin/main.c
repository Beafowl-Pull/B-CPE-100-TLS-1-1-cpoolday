/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** UwU
*/

struct info_param
{
    int length;
    char *str;
    char *copy;
    char ** word_array;
};

void main (int ac , char **av)
{
    my_params_to_array(ac , av);
}