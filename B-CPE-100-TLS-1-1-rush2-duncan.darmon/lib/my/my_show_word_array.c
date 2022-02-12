/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** UwU
*/

void my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0) {
        if (my_str_isalpha(tab[i]) && tab[i] != "\0") {
            my_putstr(tab[i]);
            my_putchar('\n');
            i++;
        }
    }
    return (0);
}
