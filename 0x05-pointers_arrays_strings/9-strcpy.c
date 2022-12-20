#include<stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *@dest: parameter 1
 *@src: parameter
 *Return: non
 */

void _strcpy(char *dest, char *src)
{
	while (*src)
	{
		putchar(*dest++ = *src++);
	}
	dest = '\0';
}
