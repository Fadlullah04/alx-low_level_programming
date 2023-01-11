#include"main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array - function creates array
 * @size: size of array
 * @c: character to be stored
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	size_t i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
