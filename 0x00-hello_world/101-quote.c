#include <unistd.h>
/**
*main - entry point
*Return: 1 means (success)
*/
int main(void)
{
	const char *message = "and that piece of art is useful\"
\- Dora Korpar, 2015-10-19\n";

	write(2, message, 60);
	return (1);
}