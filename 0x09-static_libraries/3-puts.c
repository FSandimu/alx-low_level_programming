#include "main.h"
/**
 * _puts - print in standout
 * @str: strin that is to be printed
 * Return: success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
