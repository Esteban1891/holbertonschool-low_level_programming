#include "holberton.h"

/**
 * array_range - The array created should contain all the values.
 * @min: value of the array
 * @max: value of the array
 * Return: Return the array
 */

int *array_range(int min, int max)
{
	int *str;
	int x;

	if (min > max)
		return (NULL);

	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		str[x] = min;
		min++;
	}
	return (str);
}
