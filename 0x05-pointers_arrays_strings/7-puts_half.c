#include"main.h"

/**
 * puts_half - print a string from the middle
 *
 * @str: test string
 */

void puts_half(char *str)
{
	int i, half_string, len, limiter;

	len = 0;
	limiter = 0;

	for (i = 0; str[i] != '\0'; i++)
		++len;

	if (len % 2 == 0)
	{
		half_string = len / 2;
	}

	else
	{
		half_string = (len - 1) / 2;
		limiter = 1;
	}

	for (i = half_string + limiter; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
