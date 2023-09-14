#include "main.h"
/**
 * print_line - draws straight lines
 * @y: number of lines to be drawn
 * Return: (success)
 */
void print_line(int y)
{
	int z;

	if (y <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < y; z++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
