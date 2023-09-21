#include "main.h"
/**
 * _strncpy - copies from string src to dest
 * @dest: stores the string copy
 * @src: source string
 * @n: no. of bytes to be copied
 * Return: resulting to srting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, slen = 0;

	while (src[i++])
		slen++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = slen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
