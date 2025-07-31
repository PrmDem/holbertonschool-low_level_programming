#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;
	ssize_t written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC);

	if (fd == -1)
	{
		fd = open(filename, O_RDWR | O_CREAT, 0600);

		if (fd == -1)
			return (-1);
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	if (text_content != NULL)
		written = write(fd, text_content, count);

	close(fd);

	if (written == -1)
		return (-1);

	return (1);
}
