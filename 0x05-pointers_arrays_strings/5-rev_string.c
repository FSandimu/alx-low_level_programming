#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: pointer pointing to the string
 * Return: success
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
