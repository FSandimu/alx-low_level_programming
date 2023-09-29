#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: The pointer to convert
 * Return: A intger
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int i = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 46 && s[a] <= 57)
		{
			isi = 1;
			i = (i * 10) + (s[a] - '0');
			a++;
		}
		if (isi == 1)
		{
			break;
		}
		a++;
	}
	i *= min;
	return (i);
}
