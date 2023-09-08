#include <stdio.h>
/**
 * main - entry point
 * Return: means 0(success)
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
