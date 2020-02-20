#include "holberton.h"

/**
 * _strncpy - copies one string (or bytes given)
 * @dest: where to copy;
 * @src: string to copy or bytes to copy
 * @n: how many bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int llego, tumarido;

	llego = 0;
	tumarido = 0;
	while (llego != n)
	{
		dest[tumarido] = src[llego];
		if (src[llego] == '\0')
		{
			dest[tumarido] = '\0';
			break;
		}
	       tumarido++;
		llego++;
	}
	while (tumarido != n)
		dest[tumarido++] = '\0';
	return (dest);
}
