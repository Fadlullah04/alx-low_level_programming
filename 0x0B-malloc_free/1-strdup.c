#include "main.h"
#include <stdlib.h>
#include<stddef.h>
/*#include<string.h>*/

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int j;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; ++i)
		;

	str2 = malloc(sizeof(char) * i);

	if (str2 == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		str2[j] = str[j];

	return (str2);
}
