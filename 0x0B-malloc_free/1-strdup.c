#include"main.h"

/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: return a pointer to the new string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len;
	
	if (str == NULL)
		return (NULL);
	len = strlen(str);
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = '\0';

	return (duplicate);
}
