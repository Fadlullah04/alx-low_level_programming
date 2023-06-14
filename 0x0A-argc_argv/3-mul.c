#include"main.h"

/**
 * main - print the product of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int converted1, converted2;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	converted1 = atoi(argv[argc - 1]);
	converted2 = atoi(argv[argc - 2]);

	printf("%d\n", converted1 * converted2);
	return (0);
}
