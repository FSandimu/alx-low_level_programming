#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer
 * @min: least
 * @max: largest
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *arr;
      	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
