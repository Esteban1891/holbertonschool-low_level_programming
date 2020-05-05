#include "holberton.h"

/**
 * _strcpy - function to copy string from source
 *@dest: pointer to destination of string
 *@src: pointer to source of string
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
