/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** UwU
*/

char *my_str_low_case(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 90 && str[i] >= 65) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    my_strlowcase(str);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] == str[0] + 32;
    }
    i++;
    while (str[i] != '\0') {
        if (str[i - 1] <= 47 || str[i] >= 123
        || str[i - 1] >= 58 || str[i - 1] <= 96) {
            if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}