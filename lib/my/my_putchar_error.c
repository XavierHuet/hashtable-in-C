/*
** EPITECH PROJECT, 2023
** my_putchar_error
** File description:
** my_putchar_error
*/

#include "my.h"
#include <fcntl.h>
#include <unistd.h>

int my_putchar_error(char c)
{
    write(2, &c, 1);
    return 0;
}
