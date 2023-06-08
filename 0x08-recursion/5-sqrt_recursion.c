#include"main.h"

/**
 * check - check for the square root of a number
 * @a: number to be tested
 * @b: square root
 * Return: square root of n
 */


int check(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (check(a + 1, b));
}


/**
 * _sqrt_recursion - square root of a number
 * @n: number to be tested
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
