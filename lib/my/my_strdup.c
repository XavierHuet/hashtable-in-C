/*
** EPITECH PROJECT, 2023
** do8
** File description:
** do8
*/

#include "my.h"

char *my_strdup(char *src)
{
    int i = 0;
    int l = my_strlen(src);
    char *str;

    str = malloc(sizeof(char) * l + 1);
    while (i < l + 1) {
        str[i] = src[i];
        i = i + 1;
    }
    str[l] = '\0';
    return (str);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
