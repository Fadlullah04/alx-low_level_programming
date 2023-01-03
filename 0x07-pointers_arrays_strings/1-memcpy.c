#include "main.h"

/**
 * _memcpy - copies memory from src to dest
 *@src: source
 *@dest: destination
 *@n: number of bytes of src to be copied
 *Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
