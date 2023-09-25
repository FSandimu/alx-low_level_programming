#include "main.h"
#include <string.h>
/**
 * _strpbrk - search a string for any set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string acceptable characters
 * Return: success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
		{
			return (s);
		}
		s++;
		}
	}
	return ('\0');
}
