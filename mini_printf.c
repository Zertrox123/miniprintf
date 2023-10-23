/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** mini_printf.c
*/

#include <stdarg.h>
#include <stdio.h>

int function_continue(char format, va_list var)
{
    int counter = 0;

    if (format == 'c')
        counter = counter + my_putchar(va_arg(var, char));
    if (format == 's')
        counter = counter + my_putstr(va_arg(var, char *));
    if (format == 'd' || format == 'i')
        counter = counter + my_putchar(va_arg(var, int));
    if (format == '%')
        counter = counter + my_putchar('%');
    return counter;
}

int mini_printf(const char *format, ...)
{
    va_list var;
    int counter = 0;

    va_start(var, format);
    while (*format != '\0') {
        if (*format == '%') {
            counter = counter + function_continue(*(++format), var);
        } else {
            counter = counter + my_putchar(*format);
        }
        *format++;
    }
    va_end(var);
    return counter;
}
