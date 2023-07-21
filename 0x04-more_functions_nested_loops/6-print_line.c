#include "main.h"

/**
 * main - entry
 * function that draws a straight line in the terminal
 * return - always 0
 */

void _putchar(char c)
{
	putchar(c);
}

void print_line(int n)
{
	if (n <= 0) 
	{
        _putchar('\n');
	}
	else 
	{
        for (int i = 0; i < n; i++) 
	{
            _putchar('_');
	}
	_putchar('\n');
	}
}
int main(void)
{
	print_line(5);
	print_line(0);
	print_line(-3);
	return (0);
}
