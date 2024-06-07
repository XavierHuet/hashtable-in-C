/*
** EPITECH PROJECT, 2024
** B-CPE-110-RUN-1-1-secured-marya.madi
** File description:
** hashing
*/

#include "my.h"
#include "hashtable.h"

int binary_shift(int nb, int dec)
{
    nb = (nb * 1000) >> dec;
    return nb;
}

void parse_value(int *ascii_1, int *res, int *i, int **tab)
{
    while ((*ascii_1) > 0) {
        if ((*i) == 4)
            (*i) = 0;
        (*res) = (*tab)[(*i)];
        (*i) = (*i) + 1;
        (*ascii_1) = (*ascii_1) - 1;
    }
    (*i) = 0;
}

void update_total_value(char **key, int *total_value, int *res, int *i)
{
    while ((*key)[(*i)] != '\0') {
    (*total_value) = (*total_value) + binary_shift((*key)[(*i)], (*res));
    (*i) = (*i) + 1;
    }
}

int hash(char *key, int len)
{
    int total_value = 0;
    int i = 0;
    int ascii_1 = key[my_strlen(key) / 2];
    int res = 0;
    int *tab = malloc(sizeof(int) * 4);
    int binary_value = 0;

    tab[0] = 4;
    tab[1] = 5;
    tab[2] = 2;
    tab[3] = 3;
    if (my_strlen(key) == 3)
        ascii_1 = (key[0] - key[2]) * key[1];
    parse_value(&ascii_1, &res, &i, &tab);
    update_total_value(&key, &total_value, &res, &i);
    free(tab);
    return total_value;
}
