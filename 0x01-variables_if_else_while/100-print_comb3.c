#include<stdio.h>

/**
 * main - Entry point
 * Return: Always (0)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
				continue;
			putchar(44);
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
