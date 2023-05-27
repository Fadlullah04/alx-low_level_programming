#include"main.h"

/**
 * print_diagonal - print a diagonal
 * @n: length n
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
				_putchar(' ');
			if (i == j)
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
