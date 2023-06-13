#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters it read and printed otherwise return 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int reader, written, fdp;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}

	fdp = open(filename, O_RDONLY);
	if (fdp == -1)
	{
		free(buffer);
		return (0);
	}

	reader = read(fdp, buffer, letters);
	if (reader == -1)
	{
		close(fdp);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, reader);
	if (written < 0 || written != reader)
	{
		close(fdp);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fdp);

	return (written);
}
