/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** hashtable
*/

#include "hashtable.h"
#include "my.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *tab;

    if (len < 0)
        return NULL;
    tab = malloc(sizeof(hashtable_t) * len);
    tab[0].len = len;
    tab->hash = hash;
    for (int i = 0; i < len; i++)
        tab[i].list = NULL;
    return tab;
}

void insert_begin(Node **list, int key, char *value)
{
    Node *new_node = malloc(sizeof(Node));

    if (new_node == NULL)
        return;
    if ((*list) != NULL && key == (*list)->key)
        (*list)->value = my_strdup(value);
    else {
        new_node->next = (*list);
        new_node->key = key;
        new_node->value = my_strdup(value);
        (*list) = new_node;
    }
}

void ht_dump(hashtable_t *tab)
{
    int i = 0;
    Node *curr = NULL;

    if (tab == NULL)
        return;
    while (i < tab[0].len) {
        if (tab[i].list == NULL || tab[i].list->value == NULL) {
            my_printf("[%d]:\n", i);
            i++;
            continue;
        }
        disp_linked_list(&curr, &tab, &i);
        if (curr->next == NULL)
            my_printf("> %d - %s\n", curr->key, curr->value);
        i++;
    }
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int size = 0;
    int index = 0;
    int index_value = 0;

    if (ht == NULL)
        return 84;
    if (key == NULL)
        return 84;
    if (value == NULL)
        return 84;
    size = ht[0].len;
    index_value = ht->hash(key, ht->len);
    index = index_value % size;
    insert_begin(&(ht[index].list), index_value, value);
    return 0;
}
