#include"main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _puts_recursion(s + 1));
	}

	else
	{
		return (0);
	}
}
