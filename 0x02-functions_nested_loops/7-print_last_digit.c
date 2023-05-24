#include"main.h"

/**
 * print_last_digit - print last digit of a given number
 * @n: number to be checked
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		return (-last_digit + (-last_digit * 10));
	else if (last_digit > 0)
		return (last_digit + (last_digt * 10));
	else 
		return('00');
}
