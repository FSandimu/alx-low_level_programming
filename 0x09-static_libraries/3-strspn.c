#include "main.h"
#include <string.h>
/**
 * _strspn - get the length of a prefix substring
 *that coonsists only of bytes from another string
 *@s: pointer to the source string
 *@accept: pointer to string of acceptable characters
 *Return: success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				len++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
