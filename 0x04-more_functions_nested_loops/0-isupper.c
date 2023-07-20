#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isupper(int c);
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int main() {
    char ch = 'A';
    if (_isupper(ch)) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }

    ch = 'b';
    if (_isupper(ch)) {
        printf("%c is an uppercase character.\n", ch);
    } else {
        printf("%c is not an uppercase character.\n", ch);
    }

    return 0;
}
