#include<stdio.h>
#include<stdlib.h>

/**
 * main - mulitiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, j;

	if ((argc - 1) != 2)
		puts("Error");
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}

