#include "main.h"

/**
 * main - entry
 * function that prints 10 times the numbers, from 0 to 14
 * return - always 0
 */

#include <stdio.h>

void _putchar(char c) 
{
    // Your implementation of _putchar goes here
    // (This function is used to print a single character)
    putchar(c);
}

void more_numbers(void) 
{
    int i, j;
    for (j = 0; j < 10; j++) 
    { 
        for (i = 0; i <= 14; i++) 
	{
            if (i > 9) 
	    {
                _putchar(i / 10 + '0'); 
            }
            _putchar(i % 10 + '0'); 
        }
        _putchar('\n');
    }
}

int main(void) {
    more_numbers();
    return (0);
}

