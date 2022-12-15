#include<stdlib.h>
#include<stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = 0;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
