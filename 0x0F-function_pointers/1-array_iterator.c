#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array of each new ele.
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
