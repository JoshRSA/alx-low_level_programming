#include "main.h"

/**
 * main - Entry
 * Funtion that prints the numbers, from 0 to 9
 * Return - Always 0
 */

void _putchar(char c) 
{
	 putchar(c);
}

void print_numbers(void) 
{
    int i;

    for (i = 0; i < 10; i++) 
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}

int main(void) {
    print_numbers();
    return (0);
}
