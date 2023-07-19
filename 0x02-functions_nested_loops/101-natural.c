#include <stdio.h>
#include <main.h>

/**
 *main - Entry
 *
 * Return - Always 0
 */

int main(void)
{
    int limit = 1024;
    int sum = 0;

    for (int i = 1; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
