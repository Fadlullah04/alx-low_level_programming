#include"main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be tested
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		if (*str == '.')
			break;
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
