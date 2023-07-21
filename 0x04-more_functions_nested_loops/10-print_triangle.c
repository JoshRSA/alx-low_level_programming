#include "main.h"

/**
 * main - entry 
 * function that prints a triangle
 * return - always 0
 */

void _putchar(char c) 
{
 putchar(c);
}

void print_triangle(int size) 
{
    if (size <= 0) {
        _putchar('\n');
    }
    else
    {
	    for (int i = 1; i <= size; i++) 
	    {
            for (int j = 0; j < i; j++) 
	    {
                _putchar('#');
	    }
	    }
    }
}

int main(void) 
{
    print_triangle(5);  
    print_triangle(0); 
    print_triangle(-3);
    return (0);
}
