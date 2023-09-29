#include "main.h"
/**
 * _isupper - Checks for uppercase
 * @a: is the number to be checked
 * Return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
