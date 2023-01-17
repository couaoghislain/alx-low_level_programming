#include <unistd.h>

/*
 * _putchar - write the character c in stdout
 * @c: Le personnage
 *
 * Return: on success 1, on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
