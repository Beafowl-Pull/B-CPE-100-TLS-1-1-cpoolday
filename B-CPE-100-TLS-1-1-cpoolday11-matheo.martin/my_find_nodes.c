/*
** EPITECH PROJECT, 2021
** my_find_node
** File description:
** UwU
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_find_node (linked_list_t const *begin,
void const *data_ref, int (*cmp)())
{
    linked_list_t *kek = begin;
    while (begin != NULL) {
        if (cmp(begin -> data, data_ref) == 0)
            return (kek);
        begin = begin -> next;
    }
    return (NULL);
}
