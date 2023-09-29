#include "main.h"
/**
 * _strstr - locate the first occurence of a substring
 * in a string
 *@haystack: pointer to the string to search
 *@needle: pointer to the substring to search for
 *Return: success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
