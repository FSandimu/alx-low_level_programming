#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return : (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (1 <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
