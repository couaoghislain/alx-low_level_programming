#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9
 * Return: Always 0
 */

void print_numbers(void);
{
	int c;

	while (c < 10)
	{
		_putchar(c++ + '0');
	}

	_putchar('\n');
}
