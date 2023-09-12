#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: is the number to be checked
 * Return: 1 is for +ve num, -1 for a -ve num and 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{

		-putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
