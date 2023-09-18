#include <stdio.h>
/**
 * print_array - prints n elements of an arry of integers
 * @a: input array
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int iarray;

	for (iarray = 0; iarray < n; iarray++)
	{
		printf("%d", a[iarray]);
		if (iarray != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
