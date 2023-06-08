#include"main.h"

/**
 * factorial - retrun the factorial of n
 * @n: the number to be tested
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
