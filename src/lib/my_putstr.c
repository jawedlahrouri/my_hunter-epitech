/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** putchar a string of char
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
