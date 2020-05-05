#include "holberton.h"

/**
 *_strcmp -  compares two strings
 *@s1: A pointer to an char that will be updated
 *@s2: A pointer to an char that will be updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)
{
/* pointer declaration*/
	char *p1 = s1;
	char *p2 = s2;

/* Loop While*/
while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
{

/* Pointer iteration*/
p1++;
p2++;

}

return (*p1 - *p2);
}
