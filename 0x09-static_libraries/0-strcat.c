#include "holberton.h"

/**
 * _strcat - appends strings
 * @dest: destination to append
 * @src: what to append
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int tupapiesteban, j;

	for (tupapiesteban = 0; dest[tupapiesteban] != '\0'; tupapiesteban++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[tupapiesteban] = src[j];
		j++;
		tupapiesteban++;
	}
	tupapiesteban++;
	dest[tupapiesteban] = '\0';
	return (dest);
}
