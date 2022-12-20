#include"main.h"

void times_table(void)
{
	int i = 0;

	for (i = 1; i <= 9; i++)
	{
		int result = 9 * i;

		_putchar(i + '0');
		_putchar(' ');
		_putchar(
