/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** UwU
*/

char *my_strncat(char *dest , char const *src , int nb)
{
    int i = 0;
    int j = 0;
    int lengh = my_str_lengh(dest);

    while (src[i] != '\0') {
        while (nb == 0) {
            dest[i + lengh] = src[i];
            i++;
            nb--;
        }
    }
    dest[i + lengh] = '\0';
    return (dest);
}