#include "holberton.h"

/**
 * _puts - print a string to stdout
 * @s: char array string type
 * Description: Can only use _putchar
 */

void _puts(char *s)
{
	int estebantupapi;

	for (estebantupapi = 0; s[estebantupapi] != '\0'; estebantupapi++)
	{
		_putchar(s[estebantupapi]);
	}
	_putchar('\n');
}
