#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc:
 * @argv:
 * Return: Always 0.
 */
int main(int argc, char , *argv[])
{
    char passwd[7], *mycodes;
    int len = strlen(argv[1]), x, temp;

    mycodes = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	passwd[0] = mycodes[temp];

	temp = 0;
	for (x = 0; x < len; x++)
		temp += argv[1][x];
