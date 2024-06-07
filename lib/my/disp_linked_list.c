/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** check_empty
*/

#include "my.h"
#include "hashtable.h"

void disp_linked_list(Node **curr, hashtable_t **tab, int *i)
{
    (*curr) = (*tab)[(*i)].list;
    my_printf("[%d]:\n", (*i));
    while ((*curr)->next != NULL) {
        my_printf("> %d - %s\n", (*curr)->key, (*curr)->value);
        (*curr) = (*curr)->next;
    }
}
