#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if Success, exit if fail
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_file(argv[1], argv[2]);
	exit(0);
}

/**
 * cp_file - copies src file to destination file
 *
 * @src: source file
 * @dest: destination file
 *
 */

void cp_file(const char *src, const char *dest)
{
	int fd1, fd2, r;
	char content[1024];

	fd1 = open(src, O_RDONLY);
	if (!src || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while ((r = read(fd1, content, 1024)) > 0)
	{
		if (write(fd2, content, r) != r || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", src);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
