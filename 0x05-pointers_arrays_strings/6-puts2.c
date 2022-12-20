#include"main.h"

/**
 * puts2 - produce a random string from another starting with
 * @str: string
 * Return: void
 */


void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

