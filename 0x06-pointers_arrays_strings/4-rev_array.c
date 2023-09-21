#include "main.h"
/**
 * reverse_array - reverses to intergers
 * @a: pointer to array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
