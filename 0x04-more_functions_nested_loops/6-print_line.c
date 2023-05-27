#include"main.h"

/**
 * print_line - print a line
 * @n: length of line in terms of _
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; n > 0; n--)
			_putchar(95);
		_putchar('\n');
	}
}
