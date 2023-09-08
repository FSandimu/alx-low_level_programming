#include <stdio.h>
/**
 * main- entry point
 * Return: means 0(success)
 */
int main(void)
{
	int a = 97;

	do {
		putchar(a);
		a++;
	} while (a <= 122);
	putchar('\n');
	return (0);
}
