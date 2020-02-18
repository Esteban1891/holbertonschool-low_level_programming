#include "holberton.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int tupapiesteban;

	for (tupapiesteban = 0; str[tupapiesteban] != '\0'; tupapiesteban++)
	{
		if (tupapiesteban % 2 == 0)
			_putchar(str[tupapiesteban]);
	}
	_putchar('\n');
}
