#include "main.h"
/**
 * _isupper - to check  if the character is uppercase or lowercase
 * @a: the character to be checked
 * Return:0 for otherwise and 1 for uppercase
 */
int _isupper(int a)
{
	if (a >= 68 && a <= 90)
	{
		return (1);
	}
	return (0);
}
