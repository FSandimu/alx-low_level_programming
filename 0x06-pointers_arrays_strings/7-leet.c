#include "main.h"
/**
 * *leet - encodes into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int sl, lc;
	char lLetters[] = "aAeEoOtTlL";
	char lNums[] = "4433007711";

	sl = 0;
	while (s[sl] != '\0')
	{
		lc = 0;
		while (lc < 10)
		{
			if (lLetters[lc] == s[sl])
			{
				s[sl] == lNums[lc];
			}
			lc++;
		}
		sl++;
	}
	return (s);
}
