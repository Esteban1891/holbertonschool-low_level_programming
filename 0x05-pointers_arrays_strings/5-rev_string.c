#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int tupapiesteban, sad, l;
	char soymaster;

	for (tupapiesteban = 0; s[tupapiesteban] != '\0'; tupapiesteban++)
		;

	l = tupapiesteban;
	for (tupapiesteban--, sad = 0; sad < l / 2; tupapiesteban--, sad++)
	{
		soymaster = s[sad];
		s[sad] = s[tupapiesteban];
		s[tupapiesteban] = soymaster;
	}
}
