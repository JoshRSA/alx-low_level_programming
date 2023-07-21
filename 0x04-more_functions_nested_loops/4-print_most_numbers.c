#include "main.h"

/**
 * main - Entry
 * Function that prints the numbers, from 0 to 9
 * Return - Always 0
 */

void _putchar(char c) 
{
    putchar(c);
}

void print_most_numbers(void) 
{
    int i;
    for (i = 0; i < 10; i++) 
    {
        if (i != 2 && i != 4) 
	{
            _putchar(i + '0'); 
        }
    }
    _putchar('\n'); 
}

int main() 
{
    print_most_numbers();
    return 0;
}
