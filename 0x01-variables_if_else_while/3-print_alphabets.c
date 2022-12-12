#include<stdio.h>
#include<stdlib.h>

/**
 * main -entry point
 * Return: Always 0
 */

int main(void)
{
	int alphabets = 0;
	int ALPHABETS = 0;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar (alphabets);
	}
	for (ALPHABETS = 'A'; ALPHABETS <= 'Z'; ALPHABETS++)
	{
		putchar (ALPHABETS);
	}
	putchar ('\n');
	return (0);
}
