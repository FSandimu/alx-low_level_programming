#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of the string
 * @s : string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
