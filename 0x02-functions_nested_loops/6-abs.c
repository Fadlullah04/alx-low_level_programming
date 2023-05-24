#include"main.h"

/**
 * _abs - get the absolute number of a given number
 * @n: number to be returned
 * Return: absoluted value
 */
int _abs(int n)
{
	int res;

	if (n < 0)
	{
		res *= -1;
		return (res);
	}
	else
		return (n);
}
