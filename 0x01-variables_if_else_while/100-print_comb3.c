#include <stdio.h>

/*Printing all possible different combinations of two digits*/
int main(void)
{
    int firstDigit;
    int secondDigit;

    for (firstDigit = 0; firstDigit <= 8; firstDigit++)
    {
        for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
        {
            putchar('0' + firstDigit);
            putchar('0' + secondDigit);

            if (firstDigit != 8 || secondDigit != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

