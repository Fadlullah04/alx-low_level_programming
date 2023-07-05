#include"main.h"

/**
 * is_palindrome - checks a string if it's a palindrome.
 * @s: string to be checked
 * Return: 1 if s is a palindrome
 * 0 otherwiae
 */

int is_palindrome(char *s)
{
	if (s == NULL || *s == '\0')
		return (1);
	if (strlen(s) == 1)
		return (1);
	if (*s != s[strlen(s) - 1])
		return (0);
	*(s + strlen(s) - 1) = '\0';
	return (is_palindrome(s + 1));
}
