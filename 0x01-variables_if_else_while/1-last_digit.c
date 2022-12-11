#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* *
 * main - Entry point
 * Return: Always 0 (Success)
 * */

int main(void)
{
	int n;
	int last_number = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, last_number);
	if (last_number > 5)
	{
		printf("and is less than 5\n");
	}
	else if (last_number < 6 && last_number != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else if (last_number == 0)
	{
		printf(" and is 0\n");
	}
	return (0);
}
