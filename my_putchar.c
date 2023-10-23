/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_putchar.c
*/

void my_putchar(char c)
{
    return write(1, &c, 1);
}
