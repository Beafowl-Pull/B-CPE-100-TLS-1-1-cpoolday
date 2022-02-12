/*
** EPITECH PROJECT, 2021
** my_rev_list
** File description:
** UwU
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

void my_rev_list(linked_list_t ** begin)
{
    linked_list_t *previous = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next;
    while (current != NULL) {
        next = current -> next;
        current -> next = previous;
        previous = current;
        current = next;
    }
    *begin = previous;
}
