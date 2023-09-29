#include "main.h"
/**
 * _isdigit - Checks if its a digit
 * @b: is number to be checked
 * Return: 1 for digit and 0 for otherwise
 */
int _isdigit(int b)
{
	if (b >= 48 && b <= 57)
	{
		return (1);
	}
	return (0);
}
