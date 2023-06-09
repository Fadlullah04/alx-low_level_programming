#include"main.h"

/**
 * _strlen - check the length of a string
 * @s: string to be tested
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
