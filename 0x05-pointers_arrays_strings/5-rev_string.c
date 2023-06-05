#include"main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char *begin_ptr, *end_ptr, temp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
		++len;

	begin_ptr = s;
	end_ptr = s + len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;

		end_ptr--;
		begin_ptr++;
	}
}
