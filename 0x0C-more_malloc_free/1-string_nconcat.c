#include"main.h"
/**
 * string_nconcat - helper function
 * @s1: s1
 * @s2: s2
 * @len1: len1
 * @len2 : len2
 * Return: success
 */
char *size(char *s1, char *s2, int len1, int len2);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, bytes;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	bytes = (int)n;


	if (bytes >= len2)
		return (size(s1, s2, len1, len2));
	if (bytes < len2)
	{
		int new_len;

		new_len = bytes;
		return (size(s1, s2, len1, new_len));
	}

	return (NULL);
}


/**
 * size - helper function
 * @s1: s1
 * @s2: s2
 * @len1: len1
 * @len2 : len2
 * Return: success
 */

char *size(char *s1, char *s2, int len1, int len2)
{
	char *p1;
	int i, j;

	p1 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p1 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p1[i] = s1[i];
	p1[len1] = '\0';
	for (j = 0; j < len2; j++)
		p1[len1 + j] = s2[j];
	p1[len1 + len2] = '\0';

	return (p1);
}
