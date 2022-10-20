#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the char
 * @c:the character to be print
 * Return: 1 if success else -1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
