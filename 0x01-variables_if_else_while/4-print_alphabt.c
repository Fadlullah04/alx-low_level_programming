#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	/*program prints a-z to stdout except e and q*/

	int alphabets = 0;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	if (alphabets == 'e' || alphabets == 'q')
		continue;
	putchar (alphabets);	
	}
	putchar('\n');
	return (0);
}
