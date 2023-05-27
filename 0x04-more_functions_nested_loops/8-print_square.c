#include"main.h"

/**
 * print_square - print a square
 * @size: size of square
 */

void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
}
