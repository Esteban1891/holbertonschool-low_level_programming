#include <stdio.h>


void __attribute__((constructor)) hare(void);

/**
 *print_hare - prints a hare before the main
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
