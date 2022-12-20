#include"main.h"
#include<stdio.h>

/**
 * _abs - find the arsolute of a number
 * @int: integrer value
 * Return: result
 */

int _abs(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x >= 10)
	{
		_abs(x / 10);
	}
	_putchar (x % 10 + '0');

	return (0);
}
