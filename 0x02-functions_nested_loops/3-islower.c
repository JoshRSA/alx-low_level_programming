#include <stdio.h>
/*
 * main - Entry
 *
 * Return - Always 0
 */

int _islower(int c);
{
	return c>= 'a' && c<= 'z';
}

int main()
{
	int c;

	printf("Letter: ");
	scanf("%c", &c);

	if (_islower(c))
	{
		printf("1 \n");
	}
		
	else
	{
		printf('0');
	}
	

	return (0);
}
