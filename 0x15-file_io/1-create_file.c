#include "holberton.h"
/**
 * create_file - create a file with the text content
 * @filename: name of the file to open
 * @text_content: text of content in file
 * Return: 1 on succes -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int number;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (filename == NULL)
		return (-1);

	number = write(fd, text_content, strlen(text_content));

	if (number == -1)
		return (-1);
	close(fd);
	return (1);
}
