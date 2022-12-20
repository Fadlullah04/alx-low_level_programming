#include"main.h"
/**
 * print_most_numbers - print 0 - 9 except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int counter;

	for (counter  = 48;  counter <= 57; counter++)
	{
	if (counter == 50  || counter == 52)
		continue;
	_putchar(counter);
	}
	_putchar('\n');
}
