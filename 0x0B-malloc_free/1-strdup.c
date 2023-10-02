#include "main.h"
#include <stdlib.h>
/**
 * _strdup -duplicate of the string str
 * @str: the duplicated string
 * Return: success
 */
char *_strdup(char *str)
{
	int b = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}
	s = malloc((sizeof(char) * j) + 1);
	if (s == NULL)
		return (NULL);
	while (b < j)
	{
		s[b] = str[b];
		b++;
	}
	s[b] = '\0';
	return (s);
}
