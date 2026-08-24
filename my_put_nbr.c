/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday03-omar.joudi
** File description:
** my_put_nbr.c
*/

int my_put_nbr(long nb)
{
    long num;

    if (nb < 0) {
        my_putchar(45);
        nb = nb * (-1);
    }
    if (nb >= 10) {
        num = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(num + 48);
    } else {
        my_putchar(nb + 48);
        return 0;
    }
}
