#include"main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while(c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
