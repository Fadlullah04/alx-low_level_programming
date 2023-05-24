#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: starting point
 * Return: void
 */
void print_to_98(int n)
{
	int last_num = 98;

	if (n > 98)
	{
		for (; n >= 97; n--)
		{
			printf("%d, ", n);
			if (n == 97 || n == 98)
				break;
		}
		printf("%d", last_num);
		putchar('\n');
	}
	else
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		printf("%d", last_num);
		putchar('\n');
	}
}
