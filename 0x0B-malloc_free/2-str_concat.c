#include"main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the duplicated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len1, len2, len3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2;

	p = malloc(sizeof(char) * (len3 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len3] = '\0';

	return (p);
	free(p);
}
