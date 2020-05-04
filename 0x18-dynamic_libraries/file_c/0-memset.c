#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Array of char
 * @b: Constant character
 * @n: Number of bytes
 * Return: Array filled with the constant
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
	s[a] = b;
}
return (s);
}
