#include <stdio.h>

/*
 * main - entry
 *
 * Return - Always 0
 */

void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
    }
    else
    {
        while (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
    }

    printf("%d\n", n);
}

