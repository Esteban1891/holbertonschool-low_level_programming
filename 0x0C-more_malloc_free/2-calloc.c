#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - mallocs assigned memory and sets to zero
 *
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int x;
if (nmemb == 0 || size == 0)
return (NULL);
str = malloc(nmemb * size);
if (str == NULL)
return (NULL);
for (x = 0; x < (size * nmemb); x++)
str[x] = 0;
return (str);
}
