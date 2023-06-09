#include"main.h"

/**
 * check - check for prime numbers
 * @a: case tester I
 * @b: case tester II
 * Return: prime
 */

int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - check for a prime number
 * @n: number to be tested
 * Return: 1 if n is prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
