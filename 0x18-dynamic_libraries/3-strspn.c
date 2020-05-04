#include "holberton.h"

/**
 * _strspn - function to find size of array containing words
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return: length of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
int a, b;

for (a = 0; s[a]; a++)
{
	for (b = 0; accept[b]; b++)
	{
		if (accept[b] == s[a])
			break;
	}
	if (!accept[b])
		break;
}
return (a);
}
