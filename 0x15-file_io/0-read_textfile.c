#include "main.h"

/**
*read_textfile - read a text file and print it to the POSIX output
*@filename: file name
*@letters: number of letters to be printed
*Return: return zero
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		return (0);
	}
	buf[letters + 1] = '\0';
	close(fd);

	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_write == -1)
	{
		return (0);
	}
free(buf);

return (bytes_read);
}
