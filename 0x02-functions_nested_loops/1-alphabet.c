#include "main.h"

/**
 *print_alphabet - prints the alphabets from a-z 
 * 
 *in lowercase
 *
 *Return: Nothing
 */

void print_alphabet(void)
{
	int numcounter;

	for (numcounter = 'a'; numcounter <= 'z'; numcounter++)
	{
		_putchar(numcounter);
	}
}
