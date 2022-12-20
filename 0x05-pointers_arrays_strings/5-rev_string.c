#include"main.h"
#include<stdio.h>

/**
 * rev_string - reverses string
 * @s: string inputed
 * Return: void
 */

void rev_string(char *s)
{
	int counter = 0;
	int c = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (c = counter - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
