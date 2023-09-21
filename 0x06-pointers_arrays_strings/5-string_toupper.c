#include "main.h"
/**
 * *string_toupper - changes to uppercase
 * @x: pointer to string
 * Return: uppercasestring
 */
char *string_toupper(char *x)
{
	int ls = 0;

	while (x[ls] != '\0')
	{
		if (x[ls] >= 97 && x[ls] <= 122)
		{
			x[ls] = x[ls] - 32;
		}
		ls++;
	}
	return (x);
}
