#include "main.h"

/**
 * create_file - creates a file and writes string into it
 * @filename: name of the file
 * @text_content: string content in the file
 *
 * Return: 1 for success or 1- otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fdp;
	int written = 0;
	size_t len;

	if (!filename)
	{
		return (-1);
	}
	fdp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdp == -1)

	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";


	for (len = 0; text_content[len]; len++)


	written = write(fdp, text_content, len);

	if (written == -1)
		return (-1);

	close(fdp);
	return (1);
}
