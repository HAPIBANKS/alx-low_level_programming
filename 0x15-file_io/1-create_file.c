#include "main.h"

/**
*create_file - function that creates files
*@filename: file name
*@text_content: content of the file
*Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int let;
	int r_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	r_w = write(fd, text_content, let);

	if (r_w == -1)
		return (-1);

	close(fd);

	return (1);
}
