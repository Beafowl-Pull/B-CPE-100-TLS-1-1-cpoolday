/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** uwu
*/

void my_putchar(char c) {
    extern long write (int, const char *, unsigned long);
    (void) write(1, &c, 1);
}
