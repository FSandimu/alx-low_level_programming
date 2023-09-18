#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: void(success)
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *b;
	*b = *a;
	*a = swap;
}
