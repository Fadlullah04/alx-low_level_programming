#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: ALways(0) success
 */

int main(void)
{
	int n;
	int last_digit;
	char *abs = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("%s %d is %d and is greater than 5\n", abs, n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
		printf("%s %d is %d and is less  6 and not 0\n", abs,  n, last_digit);
	return (0);
}
