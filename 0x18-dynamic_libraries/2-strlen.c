#include "holberton.h"

/**
 * _strlen  -returns the length of a string.
 * @s: pointer s.
 * Return: Always 0.
 */

int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
