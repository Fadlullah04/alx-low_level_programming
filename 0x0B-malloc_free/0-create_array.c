#include"main.h"

/**
 * create_array - create an array of chars and
 * initialize it
 *
 * @size: size of array
 * @c: character
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size = 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
	free(p);
}
