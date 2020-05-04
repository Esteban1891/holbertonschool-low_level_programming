#include "holberton.h"
/**
 *_strcat - concatenate two strings
 *@dest: destination concatenate
 *@src: source concatenate
 *Return: concatenate two string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
