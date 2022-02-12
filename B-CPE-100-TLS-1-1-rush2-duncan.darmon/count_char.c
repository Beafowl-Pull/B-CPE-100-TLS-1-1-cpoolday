/*
** EPITECH PROJECT, 2021
** CPOOL RUSH 2
** File description:
** func to counter occurences of a letter in arguments
*/

int compare_char(char s, char c)
{
    int check = 0;
    if (my_char_isletter(s) && my_char_isletter(c)) {
        if (s == c || s == c + 32 || s == c - 32) {
            check++;
        }
    }
    return check;
}

void put_percent (char *str, int count)
{
    int i = 0;
    float percent;
    float letters = 0.0;
    float occurences = (float)count;
    while (str[i] != '\0') {
        letters = letters + 1;
        i++;
    }
    my_putchar(' ');
    my_putchar('(');
    percent =  occurences / letters * 100;
    my_printfloat((double)percent);
    my_putchar('\%');
    my_putchar(')');
}

void count_char(int argc, char *argv[], int lastc)
{
    int y = 0;
    int count = 0;
    while (argv[1][y] != 34 && argv[1][y] != '\0') {
        if (compare_char(argv[1][y],  argv[1][lastc])) {
            count++;
        }
        y++;
    }
    my_putchar(argv[lastc][0]);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar(' ');
    put_percent(argv[1], count);
    my_putchar(10);
}
