#include"main.h"

/**
 * print_line - print a line
 * @n: numberof unde3rscores to be printed
 * Return: nothing
 */

void print_line(int n)
{
	int underscore = 95;
	int counter = 0;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar(underscore);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
