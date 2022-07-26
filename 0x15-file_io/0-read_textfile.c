#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 *
 * @filename: pointer to pathname
 * @letters: number of character in rhe file to be read
 *
 * Return: The number of letters it could read and write
 * Otherwise: 0 - if the file cannot be opened or filename id NULL
 * 0 - if write fails and doesnt write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *content;
	ssize_t r, w;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	content = malloc(sizeof(char) * letters);
	if (content == NULL)
	{
		return (0);
	}

	r = read(fd, content, letters);
	if (r == -1)
	{
		return (0);
	}

	w = write(STDOUT_FILENO, content, r);
	if (w == -1)
	{
		return (0);
	}

	free(content);
	close(fd);

	return (w);
}
