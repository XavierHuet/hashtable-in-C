/*
** EPITECH PROJECT, 2023
** my_putstr_error
** File description:
** my_putstr_error
*/

#include "my.h"

int my_putstr_error(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        my_putchar_error(str[index]);
        index = index + 1;
    }
    return index;
}
