#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: counts no. of arguments
 * @argv: counts for strings
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
