#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 for success and -1 for fail
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int _write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	_write = write(fd, text_content, strlen(text_content));
	if (_write == -1 || _write != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (-1);
}
