#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

        int lastDigit = n % 10;

        printf("Last digit of %d is \n", n);

        if (lastDigit > 5)
        {
                printf("and is greater than 5\n");
        }
        else if (lastDigit == 0)
        {
                printf("and is 0\n");
        }
        else
        {
                printf("and is less than 6 and not 0\n");
        }

        return (0);
}

