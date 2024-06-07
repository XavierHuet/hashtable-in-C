/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** getnbr
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int get_size(char const *str)
{
    int index = 1;
    int nb = 1;

    while (str[index] != '\0') {
        nb = nb * 10;
        index = index + 1;
    }
    return nb;
}

int my_getnbr(char const *str)
{
    int nb_size = get_size(str);
    int index = 0;
    int nb_result = 0;

    while (str[index] != '\0') {
        nb_result = nb_result + (str[index] - 48) * nb_size;
        nb_size = nb_size / 10;
        index = index + 1;
    }
    return nb_result;
}
