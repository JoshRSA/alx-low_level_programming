#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 *
 * return: Always 1 (Error)
 */

int main(void)
{
	write(1, "and that liece of art is usefule\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}