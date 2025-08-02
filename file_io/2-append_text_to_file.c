#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of the file
 * @text_content: string to add
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written;
	size_t contlen;

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (fd == 1)
			return (1);
		else if (fd == -1)
			return (-1);
	}

	else if (text_content != NULL)
	{
		while (text_content[contlen] != '\0')
		{
			contlen++;
		}

		written = write(fd, text_content, contlen);

		if (written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
