#include "main.h"

/**
 * _memset - sets memory
 *@s: string
 *@b: value to be set
 *@n: number of bytes of c to be set
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
