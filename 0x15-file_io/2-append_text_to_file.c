#include "main.h"

/**
*append_text_to_file - append a text to the end of a file
*@filename: file name
*@text_content: content of the file
*Return: 1 on success but -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int let;
	int i;

	if (!filename)
	{
	return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (let = 0; text_content[let]; let++)
		;
		i = write(fd, text_content, let);

		if (i == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
