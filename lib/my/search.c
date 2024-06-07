/*
** EPITECH PROJECT, 2024
** Visual Studio Live Share (Workspace)
** File description:
** search
*/

#include "my.h"
#include "hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    Node *curr = NULL;
    int hash_value = 0;
    int index = 0;

    if (ht == NULL)
        return "";
    if (key == NULL)
        return "";
    hash_value = ht->hash(key, 1);
    index = hash_value % ht[0].len;
    if (ht[index].list == NULL)
        return "";
    curr = ht[index].list;
    while (curr != NULL) {
        if (curr->key == hash_value)
            return (curr->value);
        curr = curr->next;
    }
    return "";
}
