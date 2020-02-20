#include "holberton.h"

/**
 * string_toupper - change a string to upper case
 * @s: pointer to a string
 * Return: s
 */

char *string_toupper(char *s)
{
	int tupapiesteban = 0;

	while (s[tupapiesteban] != '\0')
	{
		if (s[tupapiesteban] >= 'a' && s[tupapiesteban] <= 'z')
		{
			s[tupapiesteban] = s[tupapiesteban] - 32;
		}
		++tupapiesteban;
	}
	return (s);
}
