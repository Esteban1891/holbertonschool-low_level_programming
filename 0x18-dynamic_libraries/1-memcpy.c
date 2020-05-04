#include "holberton.h"

/**
 * _memcpy - copy into memory location
 * @dest: char type pointer
 * @src: char type pointer
 * @n: unsigned int type
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; n > 0; a++)
{
	dest[a] = src[a];
	n--;
}
return (dest);
}
