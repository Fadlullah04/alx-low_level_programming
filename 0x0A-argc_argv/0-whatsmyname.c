#include<stdio.h>

/**
 * main - prints its name to the stdout
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
