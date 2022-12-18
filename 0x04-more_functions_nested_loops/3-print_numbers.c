#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_numbers - numbers from 0 - 9
 * Return: Nothing
 */

void print_numbers(void)
{
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}
