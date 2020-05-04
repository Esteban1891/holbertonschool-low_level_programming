#include "holberton.h"

/**
 * _strpbrk - finds the first character in the string
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return: length of characters found
 */

char *_strpbrk(char *s, char *accept)
{

int a;

for (; *s != '\0'; s++)
{
	for (a = 0; accept[a] != '\0'; a++)
	{
		if (*s == accept[a])
		{
			return (s);
		}
	}
}
return (0);
}
