#include<unistd.h>
#include<string.h>

/**
 * main - entry point of code
 * Return: Always (0)
 */

int main(void)
{
	char *string = "and that piece of art is "
		"useful\" - Dora Korpar, 2015-10-19\n";

	write(2, string, strlen(string));
	return (1);
}
