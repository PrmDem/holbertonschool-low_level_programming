#include "main.h"

/**
 * read_textfile - reads and prints a text file to stdout
 * @filename: name of file
 * @letters: nb of letters to read/print
 * Return: actual nb of letters read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t btread;
	ssize_t written;
	size_t count = 0;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	btread = read(fd, buffer, letters);

	if (btread == -1)
		return (0);

	while (buffer[count] != '\0')
	{
		count++;
	}

	written = write(STDOUT_FILENO, buffer, count);

	close(fd);

	if (written == -1)
		return (0);
	else
		return (written);
}
