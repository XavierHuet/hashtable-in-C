/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** my_putchar
*/

#include "my.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
