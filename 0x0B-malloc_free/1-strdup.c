#include"main.h"

/**
 * _strdup - diplicate a string
 * @str: string
 * Return: pointer to newly allocated memeory containing
 * the duplicated string
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	p[len] = '\0';
	return (p);
	free(p);
}
