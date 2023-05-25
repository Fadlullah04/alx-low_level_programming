#include"main.h"

/**
 * times_table - print the 9x table
 */

void times_table(void)
{
	int def, mulr, prod;

	for (def = 0; def <= 9; def++)
	{
		_putchar('0');
		for (mulr = 1; mulr <= 9; mulr++)
		{
			_putchar(44);
			_putchar(' ');
			prod = mulr * def;
			if (prod <= 9)
				_putchar(' ');
			else
			{
				_putchar((prod / 10) + '0');
			}
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
