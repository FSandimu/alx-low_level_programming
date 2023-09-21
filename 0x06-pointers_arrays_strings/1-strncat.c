#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: no. of bytes for scr to dest
 * Return: pointer resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_len = 0;

	while (dest[i++])
		d_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[d_len++] = src[i];
	return (dest);
}
