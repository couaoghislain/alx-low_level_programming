#include "main.h"

/**
 * print_alphabet - print all aphabet in lowercase
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
