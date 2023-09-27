#include "main.h"
/**
 * _pow_recursion - returns value
 * of a power
 * @x: value of number
 * @y: value of power
 * Return: -1 for y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
