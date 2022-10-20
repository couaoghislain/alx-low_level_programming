#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the char
 * @c:the character to be print
 * Return: 1 if success, 0 if false
 * on error, -1 return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
