#include <stdio.h>

void firstfn(void) __attribute__ ((constructor));

/**
 * firstfn - prints a sentence before the main function is executed
 */
void firstfn(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

