#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates and array of char
 * @c: the strings
 * @size: the size of the array
 *
 * Return: in punters.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *esteban;

	i = 0;

	if (size == 0)
		return (NULL);
	esteban = malloc(sizeof(char) * size);
	if (esteban == NULL)
		return (NULL);

	while (i < size)
	{
		*(esteban + i) = c;
		i++;

	}
	return (esteban);
}

