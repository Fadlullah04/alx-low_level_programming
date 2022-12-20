#include"main.h"

/**
 * print_last_digit -  displays last digit of an integer
 * @x: integer inputed
 * Return: 0
 */

int print_last_digit(int x)
{
	int last = x % 10;

	_putchar(last + '0');
	return (0);
}

