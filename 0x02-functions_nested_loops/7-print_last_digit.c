#include <stdlib.h>
/*
 * main - Entry
 *
 * Return - Always 0
 *
 */

#include <stdio.h>

int print_last_digit(int num)
{
    int lastDigit = num % 10;

    if (lastDigit < 0)
    {
        lastDigit *= -1;
    }

    putchar('0' + lastDigit);

    return lastDigit;
}

