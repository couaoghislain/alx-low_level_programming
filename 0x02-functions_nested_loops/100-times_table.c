#include "main.h"

/**
* print_times_table - a function that prints the n times table, starting with 0
* @n : printing times
* rone = row, cone = column, d = digits of current result
* Return: times table
*/

void print_times_table(int n)
{
	int rone, cone, d;

	if ((n < 0) || (n > 15))
	{
	}
	else
	{
		for (rone = 0; rone <= 9; rone++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (cone = 1; cone <= 9; cone++)
			{
				d = (rone * cone);
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((d % 10) + '0');
				if (cone < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
