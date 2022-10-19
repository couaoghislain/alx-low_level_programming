#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function that print all natural numbers from n to 98
 * @n: number to be used
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else if (n == 98)
	{
		printf("98");
	}
	printf("\n");
}
