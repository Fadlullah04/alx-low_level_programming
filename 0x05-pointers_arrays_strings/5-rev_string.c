#include"main.h"
#include<stdio.h>

/**
 * rev_string - reverses string
 * @s: string inputed
 * Return: void
 */

void rev_string(char *s)
{
	int c, revs;
	char character;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	revs = 0;
	for (c = c - 1; revs < c; revs++)
	{
		character = s[c];
		s[c] = s[revs];
		s[revs] = character;
		c--;
	}
}
