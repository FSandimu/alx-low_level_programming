#include <stdio.h>
/**
 * main - Entry point
 * Return: (success)
 */
int main(void)
{
	int a = 0;
	long b = 1, k = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", k);
		else
		{
			k += b;
			b = k - b;
			printf(", %ld", k);
		}
		++a;
	}
	printf("\n");
	return (0);
}
