#include<stdio.h>

/**
 * main - causes an infinite loo
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*while (i < 0*)*/
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
