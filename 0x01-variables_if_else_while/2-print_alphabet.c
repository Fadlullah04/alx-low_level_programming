#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point of code
 * Return: 0 (Success)
 */

int main(void) /**
		 *prints a -z to the standard output
		 */
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar (alphabet);
	printf("\n");
	return (0);
}
