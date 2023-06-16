#include"main.h"

/**
 * main - add positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, j, k, converted, result, none;

	none = 0;
	result = 0;
	if (argc - 1 == 0)
	{
		printf("%d\n", none);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
	}

	for (k = 0; k < argc; k++)
	{
		converted = atoi(argv[k]);
		result += converted;
	}
	printf("%d\n", result);
	return (0);
}
