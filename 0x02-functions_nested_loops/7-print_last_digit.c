#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n:the num to be give the last digit
 * Return:value of the last digit
 */

int print_last_digit(int n)
{
	int r;

	if (n > 0)
		r = (n % 10);
	_putchar(r + '0');
	return (r);
}
