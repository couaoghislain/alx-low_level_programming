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
	int j;

	for (i = 0; i <= 15; i++)
	{
		j = (i % 16)
		putchar(j);
	}
	putchar('\n');
	return (0);
}
