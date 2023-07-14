#include"main.h"

/**
 * malloc_checked - allocate a memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memeory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b > UINT_MAX)
		exit(98);
	p = malloc(sizeof(void *) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
