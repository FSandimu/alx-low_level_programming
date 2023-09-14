#include "main.h"
/**
 * print_diagonal - draws diagonal lines
 * @p: the number of times the lines are to be drawn
 * Return: (success)
 */
void print_diagonal(int p)
{
	int x, y;

	if (p <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < p; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
