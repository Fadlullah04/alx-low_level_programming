#include"main.h"

/**
 * main - add positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, converted, result, none;

	none = 0;
	result = 0;
	if (argc - 1 == 0)
	{
		printf("%d\n", none);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		converted = atoi(argv[i]);
		if (converted == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			result += converted;
	}
	printf("%d\n", result);
	return (0);
}
