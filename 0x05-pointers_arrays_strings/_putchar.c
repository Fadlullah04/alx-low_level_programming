#include <unistd.h>

/**
 * _putchar - print a character to stdohut
 * @c: character to be printed
 * Return: 0 for success 1 to indicatre error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
