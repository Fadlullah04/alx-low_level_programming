#include"main.h"

/**
 * main - print numbers in special way
 * Return: Always (0);
 */

int main(void)
{
	int i;
	char *fz = "Fizz";
	char *bz = "Buzz";
	char *fzbz = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i > 1  && i <= 100)
			putchar(' ');
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", fzbz);
		else if (i % 3 == 0)
			printf("%s", bz);
		else if (i % 5 == 0)
			printf("%s", fz);
		else
			printf("%d", i);
	}
	putchar('\n');
	return (0);
}
