#include"main.h"

/**
 * _pow_recursion - get the power of a number
 * @x: base
 * @y: index/power
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
