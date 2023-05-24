#include"main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to be checked
 * Return: 1 if its positive
 * 0 if its zero and,
 * -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

