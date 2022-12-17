#include<stdio.h>

/**
 * _isdigit - checks for digits
 * @c: user's input
 * Return: 1 if it's a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
