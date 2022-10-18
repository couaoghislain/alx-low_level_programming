#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 * @n:the num to be give the last digit
 * Return:value of the last digit
 */

int print_last_digit(int n)
{
	int r = (n % 10);

	_putchar('0' + r);
	return (0);
}
