#include"main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
