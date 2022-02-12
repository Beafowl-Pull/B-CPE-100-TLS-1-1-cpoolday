/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** uwu
*/

void my_puterr(char c);

static char my_get_sign(char *str)
{
    int i = 0;
    int minus_count = 0;
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            minus_count++;
        i++;
    }
    if ((minus_count % 2) != 0)
        return ('-');
    else
        return ('+');
}

static int my_comp_end_off(char *str)
{
    int i = 0;
    int offset = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        i++;
    }
    return (offset + 1);
}

static int my_comp_beg_off(char *str)
{
    int i = 0;
    while (str[i] == '+' || str[i] == '-') {
        i++;
    }
    return (i);
}

int my_getnbr(char *str)
{
    int n = 0;
    char *p = str + my_comp_beg_off(str);
    while ((*p >= '0' && *p <= '9') && *p != '\0') {
        n = (n + (*p) - '0') * 10;
        p++;
    }
    n /= 10;
    if (my_get_sign(str) == '-')
        n = -n;
    return (n);
}
