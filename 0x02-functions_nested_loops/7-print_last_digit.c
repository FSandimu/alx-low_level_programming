#include "main.h"
/**
 * print_last_digit - Prints last digit of a num
 * @n: the number to be checked
 * Return: Value of last digit of num
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
