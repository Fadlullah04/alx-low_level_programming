/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character
 * Return: 1 if letter is an alphabet, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
