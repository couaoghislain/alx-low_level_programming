#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n:the num to be give the last digit
 * Return:value of the last digit
 */

int print_last_digit(int n)
{
	int r = (n % 10);

	if (r < 0)
		r = r * -1;
	_putchar(r + '0');
	return (r);
}
