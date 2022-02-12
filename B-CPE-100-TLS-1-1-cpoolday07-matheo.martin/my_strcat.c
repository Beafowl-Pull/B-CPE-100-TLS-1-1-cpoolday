/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** UwU
*/

int my_str_lengh(char const *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int lengh = my_str_lengh(dest);

    while (src[i] != "\0") {
        dest[i + lengh] = src[i];
        i++;
    }
    dest[i + lengh] = '\0';
    return (dest);
}
