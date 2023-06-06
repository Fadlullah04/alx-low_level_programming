#include"main.h"

/**
 * _strcpy - copy a string
 * @src: source pointer
 * @dest: destination pointer
 * Return: string pointed to by dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	if (src == NULL)
		return (0);

	len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
