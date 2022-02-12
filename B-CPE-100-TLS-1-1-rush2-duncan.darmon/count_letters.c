/*
** EPITECH PROJECT, 2021
** CPOOL RUSH 2
** File description:
** display occurrences in string of all letter in argument
*/

void count_letters(int argc, char *argv[])
{
    int next = 2;
    while (argv[next] != '\0') {
        count_char(argc, argv, next);
        next++;
    }
}
