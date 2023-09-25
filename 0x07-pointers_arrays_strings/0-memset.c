#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @n: number of bytes to be set to value
 * @s: pointer to the block of memory
 * @b: value to be set
 * Return: success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
