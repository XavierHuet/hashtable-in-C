/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** destroy_hashtable
*/

#include "my.h"
#include "hashtable.h"

void free_linked_list(Node **list)
{
    Node *tmp = NULL;

    if ((*list) == NULL)
        return;
    while ((*list) != NULL) {
        tmp = (*list)->next;
        free((*list)->value);
        free((*list));
        (*list) = tmp;
    }
    (*list) = NULL;
}

void delete_hashtable(hashtable_t *ht)
{
    int i = 0;

    if (ht == NULL)
        return;
    while (i < ht[0].len) {
        free_linked_list(&(ht[i].list));
        i++;
    }
    free(ht);
    ht = NULL;
}

void free_data_list(hashtable_t *tab, Node **list, char *value)
{
    Node *tmp = NULL;
    int hash_value = tab->hash(value, 1);

    while ((*list) != NULL) {
        if ((*list)->key == hash_value) {
            tmp = (*list);
            (*list) = (*list)->next;
            free(tmp->value);
            free(tmp);
        } else
            list = &((*list)->next);
    }
    free((*list));
}

int ht_delete(hashtable_t *ht, char *key)
{
    Node *curr = NULL;
    int hash_value = 0;
    int index = 0;

    if (ht == NULL)
        return 84;
    if (key == NULL)
        return 84;
    hash_value = ht->hash(key, 1);
    index = hash_value % ht[0].len;
    if (ht[index].list == NULL)
        return 84;
    curr = ht[index].list;
    while (curr != NULL) {
        free_data_list(ht, &(ht[index].list), key);
        curr = curr->next;
    }
    return 0;
}
