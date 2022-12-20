#include"main.h"
#include<stdio.h>

/**
 * print_rev - reverses string
 * @s: string inputed
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (int c = counter - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
