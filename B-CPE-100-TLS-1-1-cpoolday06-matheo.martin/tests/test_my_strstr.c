/*
** EPITECH PROJECT, 2021
** test_my_strstr
** File description:
** UwU
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char *to_find);

Test(my_strstr, compare_two_strings)
{
    char str[] = "Hello";
    char to_find[] = "Hello World";

    cr_assert_str_eq(my_strstr(str, "Hello"), "Hello");
    return (0);
}
Test(my_strstr, compare_two_strings)
{
    char str[] = "oduco";
    char to_find[] = "Hello World";

    cr_assert_str_eq(my_strstr(str, "Hello"), "Hello");
    return (0);
}
