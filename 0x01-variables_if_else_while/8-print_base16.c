#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print number of base 16
*Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
