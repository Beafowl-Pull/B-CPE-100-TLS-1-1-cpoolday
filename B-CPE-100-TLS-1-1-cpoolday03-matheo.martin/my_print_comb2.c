/*
** EPITECH PROJECT, 2021
** my_print_comb2
** File description:
** UwU
*/

int my_putchar (char c);

int my_result2(int first, int second, int third, int four)
{
    my_putchar(first + 48);
    my_putchar(second + 48);
    my_putchar(' ');
    my_putchar(third + 48);
    my_putchar(four + 48);
    if (first == 9 && second == 8 && third == 9 && four == 9) {
    } else {
        write (1, ", ", 2);
    }
}

int my_calcul(int first, int second, int third, int four)
{
    while (first <= 9 && second <= 9 && third <= 9 && four <= 9) {
        my_result2(first, second, third, four);
        if (second >= 9 && third >= 9 && four >= 9) {
            first++;
            second--;
        }
        if (third >= 9 && four >= 9) {
            second++;
            third = first;
            four = second;
        }
        if (four >= 9) {
            third++;
            four = 0;
        } else {
            four++;
        }
    }
}

int my_print_comb2(void)
{
    int first = 0;
    int second = 0;
    int third = 0;
    int four = 1;
    my_calcul(first, second, third, four);
    return (0);
}
