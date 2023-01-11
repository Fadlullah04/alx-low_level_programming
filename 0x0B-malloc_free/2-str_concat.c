#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s1s2;

	if (s1 == NULL)
		return (NULL);
	else if (s2 == NULL)
		return (NULL);
	else if(s1 == NULL && s2 == NULL)
		return (NULL);
	
	for (i = 0; s1[i] != '\0'; ++i)
			;
	for (j = 0; s2[j] != '\0'; ++j)
			;
	k = i + j + 1;
	s1s2 = malloc(k * sizeof(char));
	if (s1s2 == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s1s2[l] = s1[l];
	for (l = 0; l < j; l++)
		s1s2[l + i] = s2[l];
	s1s2[i + j] = '\0';
	return (s1s2);
}

