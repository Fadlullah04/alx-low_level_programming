#include<stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c: user's input
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
