#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source of memory area
 * @n: number of bytes to be copied
 * Return: success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
