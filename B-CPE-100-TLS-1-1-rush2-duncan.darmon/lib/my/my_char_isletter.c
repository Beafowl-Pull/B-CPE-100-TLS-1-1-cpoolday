/*
** EPITECH PROJECT, 2021
** MY CHAR IS LETTER
** File description:
** check if char c is a letter
*/

int my_char_isletter(char c)
{
    int result = 0;
    if (c <= 'z' && c >= 'a') {
        result++;
    }
    if (c <= 'Z' && c >= 'A') {
        result++;
    }
    return result;
}
