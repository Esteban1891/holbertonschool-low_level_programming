#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc:
 * @argv:
 * Return: Always 0.
 */
nt main(int argc, char *argv[])
{
	int i = 0;
	long int st = 0;
	int len = 0;
	char arr[7] = {0};
	char t[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (argc != 2)
		return (-1);
	len = _strlen(argv[1]);
	arr[0] = t[(len ^ 59) & 63];

	while (i < len)
	{
		st += argv[1][i];
		i++;
	}
	arr[1] = t[(st ^ 79) & 63];
	st = 1, i = 0;
	while (i < len)
	{
		st *= argv[1][i];
		st = (int)st;
		i++;
	}
	arr[2] = t[(st ^ 85) & 63];
	arr[3] = t[f4(len, argv[1]) & 63];
	arr[4] = t[f5(len, argv[1])];
	arr[5] = t[f6(argv[1])];
	printf("%s", arr);
	return (0);
}
