#include "main.h"

/**
 * main - check the code.
 *
 * Function that checks for uppercase char
 * Return: Always 0.
 */

int _isupper(int c);
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int main() 
{
    char ch = 'A';
    if (_isupper(ch)) {
        _putchar("%c is an uppercase character.\n", ch);
    } else {
        _putchar("%c is not an uppercase character.\n", ch);
    }

    ch = 'b';
    if (_isupper(ch)) {
        _putchar("%c is an uppercase character.\n", ch);
    } else {
        _putchar("%c is not an uppercase character.\n", ch);
    }

    return 0;
}
