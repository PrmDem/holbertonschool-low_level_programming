#include "main.h"

/**
 * copy_filetofile - copies contents of a file to another
 * @filename1: file to copy from
 * @filename2: file to copy to
 *
 * Return: 1 on success,-1 on failure.
 */
int copy_filetofile(const char *filename1, const char *filename2)
{
	int fd1, fd2, bread, copy, cl;
	char *buffer;
	size_t lcount = 0;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
		exit(98);
	}

	fd2 = open(filename2, O_RDWR | O_TRUNC);
	if (fd2 == -1)
	{
		fd2 = open(filename2, O_RDWR | O_CREAT, 0664);
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit (99);
		}

		bread = read(fd1, buffer, 1024);
		if (bread == -1)
		{
			free(buffer);
			close(fd2);
			return (-1);
		}

		while (buffer[lcount] != '\0')
		{
			lcount++;
		}

		copy = write(fd2, buffer, lcount);
			if (copy == -1)
				return (-1);

		if (bread >= 1024)
		{
			int index;
			free(buffer);
			buffer = malloc(sizeof(char) * 1024);
			if (buffer == NULL)
				return (-1);
			
			for (index = 0; index <= 1024; index++ )
			{
				buffer[index] = '\0';
			}

			bread = read(fd1, buffer, 1024);
			lcount = 0;

			while (buffer[lcount] != '\0')
			{
				lcount++;
			}

			copy = write(fd2, buffer, lcount);
			if (copy == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
				exit (99);
			}
		}
	}

	cl = close(fd1);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}

	cl = close(fd2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}

	return (1);
}

/**
 * main - to get our program to work
 * @ac: number of arguments given
 * @av: arguments passed to stdin
 *
 * Return: always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

    res = copy_filetofile(av[1], av[2]);
	if (res == -1)
		return (-1);

    return (0);
}
