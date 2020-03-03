#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - creates and punters of char
 * @str: the strings
 *
 *
 * Return: in punters.
 */


char *_strdup(char *str)
{

	char *ptr;
	int x;
	int y;

	if (str == NULL)
		return (NULL);

	for (y = 0 ; str[y] != '\0' ; y++)
		;
	ptr = (char *)malloc(sizeof(char) * (y + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		ptr[x] = str[x];

	}
	return (ptr);
}
