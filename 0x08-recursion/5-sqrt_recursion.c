#include "main.h"

int _calcul_sqrt(int num, int r);
int _sqrt_recursion(int n);

/**
 * _calcul_sqrt - Function to finds the natural square
 * @num: the number to find square root
 * @r: the root should be tested
 * Return: root if num have natural square, othercase -1
 */
int _calcul_sqrt(int num, int r)
{
	/** cas de carre parfait */
	if ((r * r) == num)
		return (r);

	/** cas carre pas parfait */
	if ((num % 2) >= 1)
		return (-1);
	return (_calcul_sqrt((num, r + 1)));
}

/**
 * _sqrt_recursion - Function that returns the natural square
 * @n: the number in the square
 * Return: 1 if n have naturel square root, othercase -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	if (n > 1)
		return (_calcul_sqrt(n, r));
}
