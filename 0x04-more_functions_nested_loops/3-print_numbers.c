#include "main.h"
/**
 * print_numbers - prints numbers between 0 and 9
 * Return: void
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
