#include<stdio.h>

/**
 * main - entry poin of code
 * Return: Always 0
 */
int  main(void)
{
	int counter = 9;

for (counter = 48; counter < 58; counter++)
{
	putchar(counter);
	if (counter < 57)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}

