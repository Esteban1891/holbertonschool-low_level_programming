#include "holberton.h"
/**
* _isdigit - tests whether a character is a
*lowercase letter from the English alphabet.
*@c: character to test.
*Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);

}
