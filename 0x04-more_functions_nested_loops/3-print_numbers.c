#include"main.h"

/**
 * print_number - numbers from 0 - 9
 * Return: Nothing
 */

void print_number(void)
{
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}
