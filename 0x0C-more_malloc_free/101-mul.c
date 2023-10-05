#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeros(char *str);
void get_prod(char *prod, char *mult, int digit,int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - length of a string
 * @str: string to be measured
 * Return: length of the string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
}

/**
 * create_xarray - create arrays and initialize
 * @size: size of initialized array
 * Description: insufficirnt space exit
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

