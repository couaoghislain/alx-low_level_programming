#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Print Alphabet
*Return: Always 0 (Success)
*/

int main(void)
{
/**
*char ch = 'a';
*for ( ; ch <= 'z'; ch++ 
*{putchar(ch);} ascii number from A=65; Z=90; a=97; z=122
*/
	int i;

	for (i = 97; i <= 122; i++)
		putchar( i );
	return (0);
}
