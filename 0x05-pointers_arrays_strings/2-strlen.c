#include "main.h"

/**
 * _strlen - function that return the lenght of a string
 * @s: the string
 * Return: int lenght
 */

int _srtlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
