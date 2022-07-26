#include "main.h"

/**
 * append_text_to_file - creates a file
 *
 * @filename: pointer to the pathname
 * @text_content: pointer to the content of the file created
 * Return: 1 on Success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
		{
		}
		w = write(fd, text_content, count);
		if (w == -1)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
