/*
** EPITECH PROJECT, 2021
** mt_str_to_word_array
** File description:
** UwU
*/

int count(const char *str)
{
    int i = 0;
    int col = 0;

    while (str[i] != '\0') {
        if (my_charisalpha(str[i]) == 0 && my_charisnum(str[i]) == 0 &&
            (my_charisalpha(str[i - 1]) == 1 || my_charisnum(str[i - 1]) == 1 ||
            i == 0))
            col++;
        i++;
    }
    if (my_charisalpha(str[i - 1]) == 1 || my_charisnum(str[i - 1]) == 1)
        col++;
    return (col);
}

char ** my_str_to_word_array(char const *str)
{
    char **dest, *stock;
    int i = 0;
    int j = 0;
    int col = 0;
    dest = malloc(sizeof(char *) * (my_strlen(str) + 1));
    for (; str[i] != '\0' && col < count_words(str); i++) {
        stock = malloc(sizeof(char) * (word_len(str, i) + 1));
        for (; my_charisalpha(str[i]) == 1 || my_charisnum(str[i]) == 1; j++) {
            stock[j] = str[i];
            i++;
        }
        if (j > 0) {
            stock[j] = '\0';
            dest[col] = stock;
            col++;
        }
        j = 0;
    }
    dest[col] = '\0';
    return (dest);
}
