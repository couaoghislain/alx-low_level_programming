#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print Alphabet for (i = 97; i <= 122; i++)
*Return: Always 0 (Success)
*/

int main(void)
{
	int (i);

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
