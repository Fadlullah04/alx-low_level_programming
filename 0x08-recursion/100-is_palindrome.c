#include"main.h"

/**
 * palindrome_checker - compares individual characters
 * @s: string to be checked
 * and returns 1 or 0 to is_palindrome
 * @start: beginning of string
 * @end: end of string
 * Return: 1 if palindrome is found
 * 0 otherwise
 */


int palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_checker(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks a string if it's a palindrome.
 * @s: string to be checked
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */


int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_checker(s, 0, len - 1));
}
