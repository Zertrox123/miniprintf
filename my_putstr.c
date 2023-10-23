/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-omar.joudi
** File description:
** my_putstr.c
*/

int my_putstr(char const *str)
{
    int counter = 0;

    while (*str != '\0') {
        my_putchar(*str);
        *str++;
        counter++;
    }
    return counter;
}
