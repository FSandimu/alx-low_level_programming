#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <font1.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: the file name
 * @letters: number of letters
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lr = read(file_d, buffer, letters);
	close(file_d);
	if (lr == -1)
	{
		free(buffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
