#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
<<<<<<< HEAD

char *_strdup(char *str)
{
	 char *duplicate;
	  int index, len = 0;

	  if (str == NULL)
		   return (NULL);

	  for (index = 0; str[index]; index++)
		  len++;

	  duplicate = malloc(sizeof(char) * (len + 1));

	  if (duplicate == NULL)
		  return (NULL);

	  for (index = 0; str[index]; index++)
		  duplicate[index] = str[index];

	  duplicate[len] = '\0';

	  return (duplicate);
=======
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
>>>>>>> 248b2e3fddde158ed566179c004f29ca4d4dda0f
}
