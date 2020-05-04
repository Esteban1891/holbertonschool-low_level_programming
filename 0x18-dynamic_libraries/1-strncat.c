#include "holberton.h"

/**
 * _strncat - concatenates one string (number of byte given)
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: how many bytes to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int eduardotumaster, j;

	for (eduardotumaster = 0; dest[eduardotumaster] != '\0'; eduardotumaster++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[eduardotumaster] = src[j];
		eduardotumaster++;
		j++;
	}
	return (dest);
}
