#include"main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1, len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);


	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);

	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + i] = '\0';

	return (concat);
}
