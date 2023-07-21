#include "main.h"

/**
 * main - entry
 * function that prints a square, followed by a new line
 * return - always 0
 */

void _putchar(char c) 
{
	putchar(c);
}

void print_square(int size) 
{
    if (size <= 0) 
    {
        _putchar('\n');
    }
    else 
    {
        for (int i = 0; i < size; i++) 
	{
            for (int j = 0; j < size; j++) 
	    {
                _putchar('#');
	    }
	     _putchar('\n');
	}
    }
}

int main(void) {
    print_square(5);
    print_square(0);
    print_square(-3);

    return (0);
