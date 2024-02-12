#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the correct output
 * @filename: the file name
 * @letters: number of letters
 * Return: number of letters
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;

	ssize_t _read, _write;

	char *buffer;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (f == 0)
		return (0);

	_read = read(f, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	close(f);
	return (_read);
}
