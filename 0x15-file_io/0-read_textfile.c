#include "holberton.h"

/**
 * read_textfile - read txt files and prints it in the POSIX output
 * @filename: name of the file to open
 * @letters:  number of letter of my input
 * Return: number of bytes or letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fd;
	char *num_bytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num_bytes = malloc(letters);
	if (num_bytes == NULL)
		return (0);
	num = read(fd, num_bytes, letters);
	if (num != (int)strlen(num_bytes))
		return (0);
	num_bytes[num] = '\0';
	write(STDOUT_FILENO, num_bytes, num);
	close(fd);
	return (num);
}
