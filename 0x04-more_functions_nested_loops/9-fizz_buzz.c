#include"main.h"

/**
 * fizz_buzz - print numbers in a specail way
 */

void fizz_buzz(void)
{
	int i;
	char *fz = "Fizz";
	char *bz = "Buzz";
	char *fzbz = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i > 1  && i <= 100)
			putchar(' ');
		if (i % 3 == 0)
			printf("%s", fz);
		else if (i % 5 == 0)
			printf("%s", bz);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("%s", fzbz);
		else
			printf("%d", i);
	}
	putchar('\n');
}

/**
 * main - driver code
 * Return: Always (0);
 */

int main(void)
{
	fizz_buzz();
}
