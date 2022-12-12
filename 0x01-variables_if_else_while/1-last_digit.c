#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;
	char space = ' ';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d %c", n, last_digit, space);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);

}

