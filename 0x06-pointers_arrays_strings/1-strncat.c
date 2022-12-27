#include"main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: given int
 * Return: dest + src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
