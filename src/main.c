/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** main
*/

#include "my.h"
#include "hashtable.h"

int main (void)
{
    hashtable_t *ht = new_hashtable (&hash , 5);
    ht_insert(ht, "Orange", "Element 1");
    ht_insert(ht, "alphabé", "Element 2");
    ht_insert(ht, "Ohrangé", "Element 3");
    ht_insert(ht, "Bambou", "Element 4");
    ht_insert(ht, "Banane", "Element 5");
    ht_dump (ht);
    return 0;
}
