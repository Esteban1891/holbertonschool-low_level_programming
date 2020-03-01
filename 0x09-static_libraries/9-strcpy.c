#include "holberton.h"

/**
 * *_strcpy - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int tupapiesteban;

	for (tupapiesteban = 0; src[tupapiesteban] != '\0'; tupapiesteban++)
	{
		dest[tupapiesteban] = src[tupapiesteban];
	}
	dest[tupapiesteban] = '\0';

	return (dest);
}
