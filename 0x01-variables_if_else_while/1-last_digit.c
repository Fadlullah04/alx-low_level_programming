#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)/* function finds the last digit
	       * of a randomly generated number
	       */
{
	int n; /* randomly generated number*/
	int last_number; /* holds the last digit of number generated */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;
	printf("Last digit of %d is %d", n, last_number);
	if (last_number > 5)
	{
		printf(" and is less than 5\n");
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
