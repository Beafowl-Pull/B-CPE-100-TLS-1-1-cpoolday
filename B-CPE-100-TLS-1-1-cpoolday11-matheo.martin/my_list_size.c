/*
** EPITECH PROJECT, 2021
** my_list_size
** File description:
** UwU
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t const *tmp = begin;
    int i = 0;
    while (tmp != NULL) {
        i++;
        tmp = tmp -> next;
    }
    return (i);
}
