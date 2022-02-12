/*
** EPITECH PROJECT, 2021
** CPOOL RUSH 2
** File description:
** program to guess the language of a text
*/

void count_letters(int argc, char *argv[], int len);

void main(int ac, char *argv[])
{
    int end = my_strlen(argv) - 1;
    count_letters(ac, argv, end);
}
