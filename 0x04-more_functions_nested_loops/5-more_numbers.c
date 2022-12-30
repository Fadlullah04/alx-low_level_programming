#include"main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 * Return: void function, no return value
 */

void more_numbers(void)
{
	int counter1  = 0;
	int counter2 = 0;

	for (counter2 = 0; counter2 <= 9; counter2++)
	{
		for (counter1 = 0; counter1 <= 14; counter1++)
		{
			if (counter1 >= 10)
				_putchar('1');
			_putchar((counter1 % 10) + '0');
		}
		_putchar('\n');
	}
}
