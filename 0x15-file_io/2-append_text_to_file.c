#include "holberton.h"
/**
 * append_text_to_file - append a new text to an existing file
 * @filename: input name of the file
 * @text_content: text of content of file
 * Return: 1 on succes -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int number;

fd = open(filename, O_WRONLY | O_APPEND);
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
