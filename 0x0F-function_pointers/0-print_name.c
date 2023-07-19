#include"function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * Return: printed name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
