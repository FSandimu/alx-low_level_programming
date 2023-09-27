#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - calculates natural square root
 * @n: calculate the square root of a number
 *
 * Return: success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Return the natural square root of a number
 * @n: calculate the natural squre root
 * @i: mode
 * Return: natural squre root
 * caluculation
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
