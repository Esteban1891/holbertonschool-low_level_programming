#include "holberton.h"

/**
* _isupper - tests whether a character is aowercase letter from the English.
*@c: printf  'a' y 'c'.
* Return: 1 if it is a lowercase letter, 0 if it is not a lowercase
* letter.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
