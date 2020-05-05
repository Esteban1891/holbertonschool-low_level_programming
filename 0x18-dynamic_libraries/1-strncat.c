#include "holberton.h"
/**
 *_strncat - concatenate two strings
 *@dest: destination concatenate
 *@src: source concatenate
 *@n: int type
 *Return: concatenate two string same strcat
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len;
int j;
dest_len = _strlen(dest);

for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[dest_len + j] = src[j];
dest[dest_len + j] = '\0';

return (dest);
}
