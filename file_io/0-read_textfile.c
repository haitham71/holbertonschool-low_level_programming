#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytesread, byteswrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		return (0);
	}

	byteswrite = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswrite == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (byteswrite);
}
