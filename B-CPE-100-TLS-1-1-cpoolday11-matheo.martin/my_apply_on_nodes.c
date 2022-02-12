/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes
** File description:
** UwU
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin , int (*f)(void *))
{
    while (begin->next != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
