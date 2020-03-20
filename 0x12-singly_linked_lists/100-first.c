#include <stdio.h>


void __attribute__((constructor)) hare(void);

/**
 *print_esteban - prints a hare before the main
 */

void print_esteban(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
