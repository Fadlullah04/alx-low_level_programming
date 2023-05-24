#include"main.h"

/**
 * _isalpha - check for alphabets
 * @c: character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
