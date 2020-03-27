include "holberton.h"

/**
 *flip_bits- get the number of bits you would need to flip.
 *@n: unsigned long int, number 1
 *@m: unsigned long in,t number 2
 *Return: the number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size, num, i;

	size = sizeof(n) * 8 - 1;
	for (i = 0, num = 0; i <= size; i++)
	{
		if ((n & 1) != (m & 1))
			num++;
		n = n >> 1;
		m = m >> 1;
	}
	return (num);
}
