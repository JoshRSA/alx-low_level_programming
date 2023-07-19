#include <stdio.h>
/*
 * main - Entry
 *
 * Return - Always 0
 */


int _isalpha(int c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    int c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (_isalpha(c)) {
        printf("The character is an alphabetic character.\n");
    } else {
        printf("The character is not an alphabetic character.\n");
    }

    return 0;
}

