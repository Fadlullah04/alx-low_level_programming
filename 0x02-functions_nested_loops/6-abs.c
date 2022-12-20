#include"main.h"
#include<stdio.h>

/**
 * _abs - find the arsolute of a number
 * @int: integrer value
 * Return: result
 */

int _abs(int x) 
{
	int result = 0;

	if (x < 0)
	{
		_putcahr(-1 * x);
	}
	else 
	{
		_putchar(x);
	}
	return (0);
}
