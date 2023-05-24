#include"main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	do {
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
	} while (j < 10);
}
