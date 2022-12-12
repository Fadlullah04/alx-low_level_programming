#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point of code
 * Return: 0 (Success)
 */

int main(void)/**
		*code prints a-z to stdout
		*/
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	return (0);
}
