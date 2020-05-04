#include "holberton.h"
/**
 *_strncpy - copies the string pointed to by src, except that at most n bytes
 *@dest: destination concatenate
 *@src: source concatenate
 *@n: int type
 *Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[j] = src[j];
for (; j < n; j++)
dest[j] = '\0';

return (dest);
}
