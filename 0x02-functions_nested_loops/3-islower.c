/**
 * _islower - checks if a character is lowercase
 * @c: the character
 * Return: 1 it letter is lowercas, 0 if not
 */

int _islower(int c) /* @param (int c)- a character of your choice*/
{
	if (c >= 97 && c <= 121)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
