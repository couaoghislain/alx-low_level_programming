#include "main.h"

/**
 *  _strspn - Gets the length of a prefix substring
 *  @s: The string to be searched
 *  @accept: The prefix to be measured
 *  Return: The number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				j++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++
	}
	return (i);
}
