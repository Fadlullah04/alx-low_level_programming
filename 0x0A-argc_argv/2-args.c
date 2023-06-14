#include"main.h"

/**
 * main - print all argument received
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
