#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point of code
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
	putchar(alphabet);
	}
	printf("\n");
	return (0);
}
