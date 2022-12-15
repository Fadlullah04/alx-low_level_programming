#include "main.h"

/**
 *print_alphabet - prints the alphabets from a-z
 *
 *in lowercase
 *
 *Return: Nothing
 */

void print_alphabet_x10(void)
{
	int major = 0;

	for (major = 0; major <= 9; major++)
	{

		int numcounter;

		for (numcounter = 'a'; numcounter <= 'z'; numcounter++)
		{
			_putchar(numcounter);
		}
			_putchar('\n');
	}
}


