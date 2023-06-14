#include "main.h"

/**
 * append_text_to_file - appends text to the file
 * @filename: name of file to append text to
 * @text_content: text string to append
 *
 * Return: 1 on success or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t written = 0;
	int fdp;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	fdp = open(filename, O_WRONLY | O_APPEND);
	if (fdp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		written = write(fdp, text_content, len);
	}
	close(fdp);
	if (written == -1)
		return (-1);
	return (1);
}
