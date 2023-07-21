#include "main.h"

/**
 * main - entry
 * function that draws a diagonal line on the terminal
 * return - always 0
 */

void _putchar(char c) 
{
	 putchar(c);
}

void print_diagonal(int n) 
{
	if (n <= 0) 
	{
        _putchar('\n');
	}
	else 
	{
        for (int i = 0; i < n; i++) 
	{
            for (int j = 0; j < i; j++) 
	    {
                _putchar(' ');
	    }
	    _putchar('\\');
	    _putchar('\n');
	}
	}
}

int main(void) 
{
	print_diagonal(5);
	print_diagonal(0);
	print_diagonal(-3);
	return (0);
}
